/* $Id$ */

#include <stdio.h>

#include <X11/X.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <Xm/Xm.h>
#include <Xm/Text.h>
#include <Xm/Label.h>
#include <Xm/MainW.h>
#include <Xm/Form.h>
#include <Xm/PushB.h>
#include <Xm/ScrolledW.h>

#include "../Image/harp.xbm"

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

void harp_info(Widget w, void* pointer, void* data) {}

int harp_gui_init(void) {
	XInitThreads();
	top = XtVaAppInitialize(&ctx, "Harp", NULL, 0, &argc, argv, NULL, XtNtitle, "Harp", NULL);
	if(top == NULL) {
		fprintf(stderr, "Failed to create the main window\n");
		return 1;
	}
	harp = XCreateBitmapFromData(XtDisplay(top), DefaultRootWindow(XtDisplay(top)), (char*)harp_bits, harp_width, harp_height);
	main_window = XtVaCreateManagedWidget("MainWindow", xmMainWindowWidgetClass, top, NULL);
	form = XmVaCreateForm(main_window, "Form", NULL);
	url = XmVaCreateText(form, "URL", XmNtopAttachment, XmATTACH_FORM, XmNleftAttachment, XmATTACH_FORM, XmNrightAttachment, XmATTACH_WIDGET, NULL);
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
