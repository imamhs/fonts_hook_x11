# Fonts hook for X11

When old pure X11 applications (applications using legacy server-side fonts) do not render fonts correctly due to missing system fonts or a change in system configuration, as found in the Modern graphical stack, this library can force the applications to use the specified Fixed font when any of the Helvetica, Courier and Times families of fonts can not be used by the application. The idea is to increase font compatibility of the old applications, so that they look nice on modern systems.

**Apply the hook:**

*LD_PRELOAD=./fonts_hook_x11.so app-executable*

**Requirements:**

-Fixed fonts

On Ubuntu you can install fixed fonts using following command:

*sudo apt install xfonts-base*

**Example:**

Before applying the hook (Exile III: Ruined World on Ubuntu 25.10):
<img width="587" height="488" alt="Screenshot From 2026-04-09 15-00-50" src="https://github.com/user-attachments/assets/65c456cb-4f1e-4470-80e4-a4e6a2b1511a" />

After applying the hook (Exile III: Ruined World on Ubuntu 25.10):
<img width="587" height="488" alt="Screenshot From 2026-04-09 15-00-06" src="https://github.com/user-attachments/assets/ae09252f-a8d7-462f-945a-9f15aacd7d3f" />

Cheers,
Imam
