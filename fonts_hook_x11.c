/*
 * Fonts hook for X11 applications
 *
 * Copyright (C) 2026 Md Imam Hossain
 */

#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>
#include <string.h>
#include <X11/Xlib.h>

static const char* replaced_font = "-misc-fixed-medium-r-semicondensed--13-*-*-*-*-*-*-*";

Font XLoadFont (Display *dpy, const char *name)
{
    static Font (*original) (Display *, const char* ) = NULL;

    // Catch and store original X11 XLoadFont function call address
    if (!original) original = dlsym (RTLD_NEXT, "XLoadFont");
    
    // Detect and override the following fonts requests
    if (strstr(name, "helvetica") || strstr(name, "courier") || strstr(name, "times")) 
    {
        fprintf(stdout, "Redirecting font '%s' to '%s'\n", name, replaced_font);
        return original (dpy, replaced_font);
    }
    
    // If not a match just use fonts requested by the application
    return original (dpy, name);
}
