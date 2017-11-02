
Debian
====================
This directory contains files used to package pythonbitd/pythonbit-qt
for Debian-based Linux systems. If you compile pythonbitd/pythonbit-qt yourself, there are some useful files here.

## pythonbit: URI support ##


pythonbit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install pythonbit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your pythonbit-qt binary to `/usr/bin`
and the `../../share/pixmaps/pythonbit128.png` to `/usr/share/pixmaps`

pythonbit-qt.protocol (KDE)

