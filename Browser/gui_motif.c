/* $Id$ */

#include <stdio.h>

#include <X11/X.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <Xm/Xm.h>
#include <Xm/MainW.h>
#include <Xm/Form.h>

#include "../Images/harp.xbm"

Widget top;
Widget main_window;
Widget form;
Widget url_label;
Widget url;

Pixmap harp;

XtAppContext ctx;
extern int argc;
extern char** argv;

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
	XtManageChild(form);

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
