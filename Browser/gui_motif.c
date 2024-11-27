/* $Id$ */

#include <stdio.h>

#include <X11/X.h>
#include <X11/Intrinsic.h>
#include <Xm/Xm.h>

Widget top;
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
