# Fonts hook for X11

When old pure X11 applications (applications using legacy server-side fonts) do not render fonts correctly due to missing system fonts or a change in system configuration, as found in the Modern graphical stack, this library can force the applications to use the specified Fixed font when any of the Helvetica, Courier and Times families of fonts can not be used by the application. The idea is to increase font compatibility of the old applications, so that they look nice on modern systems.

**Apply the hook:**

*LD_PRELOAD=./fonts_hook_x11.so app-executable*

**Requirements:**

-Fixed fonts

On Ubuntu you can install fixed fonts using following command:

*sudo apt install xfonts-base*

Cheers,
Imam
