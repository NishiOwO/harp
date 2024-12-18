/* $Id$ */

#include <stdio.h>

#include <X11/X.h>
#include <X11/Xft/Xft.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <Xm/Xm.h>
#include <Xm/Text.h>
#include <Xm/Label.h>
#include <Xm/MainW.h>
#include <Xm/Form.h>
#include <Xm/PushB.h>
#include <Xm/ScrolledW.h>
#include <Xm/MessageB.h>

#include <cJSON.h>

#include "harp_string.h"
#include "harp_version.h"

#include "../Image/harp.xbm"

extern cJSON* json;

Widget top;
Widget main_window;
Widget form;
Widget url;
Widget logo_button;
Widget scrolled_window;

Pixmap harp;

XtAppContext ctx;
extern int argc;
extern char** argv;

struct fonts {
	XftFont* big;
	XftFont* font;
	XftFont* fixed;
};

struct fonts fonts;

#define SET_FONT(target, font) \
	if(font != NULL) { \
		Arg table_arg[2]; \
		XmRendition table_rendition; \
		XmRenderTable font_table; \
		XtSetArg(table_arg[0], XmNfontType, XmFONT_IS_XFT); \
		XtSetArg(table_arg[1], XmNxftFont, font); \
		table_rendition = XmRenditionCreate(target, XmFONTLIST_DEFAULT_TAG, table_arg, 2); \
		font_table = XmRenderTableAddRenditions(NULL, &table_rendition, 1, XmMERGE_REPLACE); \
		XtVaSetValues(target, XmNrenderTable, font_table, NULL); \
	}

void harp_info(Widget w, void* pointer, void* data) {
	Arg args[5];
	int n = 0;
	Widget dialog;
	Widget verform;
	Widget icon;
	Widget label;
	Widget version;
	XmString title = XmStringCreateLocalized("Version Info");
	XmString message = XmStringCreateLocalized("Harp WWW Browser");
	XmString verstr = XmStringCreateLocalized("Version " HARP_VERSION);
	n = 0;
	XtSetArg(args[n], XmNdialogTitle, title);
	n++;
	XtSetArg(args[n], XmNnoResize, True);
	n++;
	dialog = XmCreateMessageDialog(top, "info", args, n);
	SET_FONT(XmMessageBoxGetChild(dialog, XmDIALOG_OK_BUTTON), fonts.font);
	XtUnmanageChild(XmMessageBoxGetChild(dialog, XmDIALOG_CANCEL_BUTTON));
	XtUnmanageChild(XmMessageBoxGetChild(dialog, XmDIALOG_HELP_BUTTON));
	verform = XmVaCreateForm(dialog, "verform", NULL);
	icon = XmVaCreateLabel(verform, "infoicon", XmNlabelType, XmPIXMAP, XmNlabelPixmap, harp, XmNtopAttachment, XmATTACH_FORM, XmNbottomAttachment, XmATTACH_FORM, XmNleftAttachment, XmATTACH_FORM, NULL);
	label = XmVaCreateLabel(verform, "infomsg", XmNlabelString, message, XmNtopAttachment, XmATTACH_FORM, XmNleftAttachment, XmATTACH_WIDGET, XmNleftWidget, icon, XmNrightAttachment, XmATTACH_FORM, NULL);
	SET_FONT(label, fonts.big);
	version = XmVaCreateLabel(verform, "infover", XmNlabelString, verstr, XmNtopAttachment, XmATTACH_WIDGET, XmNtopWidget, label, XmNleftAttachment, XmATTACH_WIDGET, XmNleftWidget, icon, XmNrightAttachment, XmATTACH_FORM, XmNalignment, XmALIGNMENT_BEGINNING, NULL);
	SET_FONT(version, fonts.font);
	XtManageChild(version);
	XtManageChild(label);
	XtManageChild(icon);
	XtManageChild(verform);
	XtManageChild(dialog);
	XmStringFree(verstr);
	XmStringFree(message);
	XmStringFree(title);
}

int harp_gui_json(void) {
	cJSON* fjson;
	if(cJSON_GetObjectItemCaseSensitive(json, "fonts") == NULL) {
		cJSON_AddItemToObject(json, "fonts", cJSON_CreateObject());
	}
	fjson = cJSON_GetObjectItemCaseSensitive(json, "fonts");
	if(cJSON_GetObjectItemCaseSensitive(fjson, "default") == NULL) {
		cJSON* name = cJSON_CreateString("Helvetica");
		cJSON_AddItemToObject(fjson, "default", cJSON_CreateArray());
		cJSON_AddItemToArray(cJSON_GetObjectItemCaseSensitive(fjson, "default"), name);
	}
	if(cJSON_GetObjectItemCaseSensitive(fjson, "serif") == NULL) {
		cJSON* name = cJSON_CreateString("Times");
		cJSON_AddItemToObject(fjson, "serif", cJSON_CreateArray());
		cJSON_AddItemToArray(cJSON_GetObjectItemCaseSensitive(fjson, "serif"), name);
	}
	if(cJSON_GetObjectItemCaseSensitive(fjson, "sans-serif") == NULL) {
		cJSON* name = cJSON_CreateString("Helvetica");
		cJSON_AddItemToObject(fjson, "sans-serif", cJSON_CreateArray());
		cJSON_AddItemToArray(cJSON_GetObjectItemCaseSensitive(fjson, "sans-serif"), name);
	}
	if(cJSON_GetObjectItemCaseSensitive(fjson, "monospace") == NULL) {
		cJSON* name = cJSON_CreateString("Courier");
		cJSON_AddItemToObject(fjson, "monospace", cJSON_CreateArray());
		cJSON_AddItemToArray(cJSON_GetObjectItemCaseSensitive(fjson, "monospace"), name);
	}
	if(cJSON_GetObjectItemCaseSensitive(fjson, "size") == NULL) {
		cJSON_AddItemToObject(fjson, "size", cJSON_CreateNumber(10));
	}
	return 0;
}

int harp_gui_init(void) {
	char font[128];
	int i;
	cJSON* fjson = cJSON_GetObjectItemCaseSensitive(json, "fonts");
	cJSON* fname;
	cJSON* fquery;
	XInitThreads();
	top = XtVaAppInitialize(&ctx, "Harp", NULL, 0, &argc, argv, NULL, XtNtitle, "Harp", NULL);
	if(top == NULL) {
		fprintf(stderr, "Failed to create the main window\n");
		return 1;
	}
	fquery = cJSON_GetObjectItemCaseSensitive(fjson, "default");
	cJSON_ArrayForEach(fname, fquery) {
		sprintf(font, "%s:style=bold:size=%d", fname->valuestring, 5 * 2 + 10);
		fonts.big = XftFontOpenName(XtDisplay(top), DefaultScreen(top), font);
		if(fonts.big != NULL) break;
	}
	fquery = cJSON_GetObjectItemCaseSensitive(fjson, "default");
	cJSON_ArrayForEach(fname, fquery) {
		sprintf(font, "%s:size=10", fname->valuestring);
		fonts.font = XftFontOpenName(XtDisplay(top), DefaultScreen(top), font);
		if(fonts.font != NULL) break;
	}
	fquery = cJSON_GetObjectItemCaseSensitive(fjson, "monospace");
	cJSON_ArrayForEach(fname, fquery) {
		sprintf(font, "%s:size=10", fname->valuestring);
		fonts.fixed = XftFontOpenName(XtDisplay(top), DefaultScreen(top), "Courier:size=10");
		if(fonts.fixed != NULL) break;
	}
	harp = XCreateBitmapFromData(XtDisplay(top), DefaultRootWindow(XtDisplay(top)), (char*)harp_bits, harp_width, harp_height);

	XtVaSetValues(top, XmNiconPixmap, harp, NULL);

	main_window = XtVaCreateManagedWidget("MainWindow", xmMainWindowWidgetClass, top, NULL);
	form = XmVaCreateForm(main_window, "Form", NULL);
	url = XmVaCreateText(form, "URL", XmNtopAttachment, XmATTACH_FORM, XmNleftAttachment, XmATTACH_FORM, XmNrightAttachment, XmATTACH_WIDGET, NULL);
	SET_FONT(url, fonts.fixed);
	XtManageChild(url);
	logo_button = XmVaCreatePushButton(form, "Logo", XmNlabelType, XmPIXMAP, XmNlabelPixmap, harp, XmNrightAttachment, XmATTACH_FORM, XmNtopAttachment, XmATTACH_FORM, XmNheight, 64 + 24, XmNwidth, 64 + 24, NULL);
	XtAddCallback(logo_button, XmNactivateCallback, harp_info, NULL);
	XtManageChild(logo_button);
	scrolled_window = XmVaCreateScrolledWindow(form, "ScrolledW", XmNtopAttachment, XmATTACH_WIDGET, XmNtopWidget, logo_button, XmNbottomAttachment, XmATTACH_FORM, XmNleftAttachment, XmATTACH_FORM, XmNrightAttachment, XmATTACH_FORM, XmNbackground, 0xffffff, NULL);
	XtManageChild(scrolled_window);
	XtManageChild(form);

	XtVaSetValues(url, XmNrightWidget, logo_button, NULL);

	XtResizeWidget(top, 800, 600, 1);
	XtRealizeWidget(top);
	return 0;
}

int harp_gui_loop(void) {
	XEvent ev;
	while(1) {
		XtAppNextEvent(ctx, &ev);
		XtDispatchEvent(&ev);
	}
	return 0;
}
