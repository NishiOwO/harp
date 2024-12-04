				       Harp Installation Instructions


			 INSTALLATION INSTRUCTIONS



    Requirements

      To install this version of Harp, you will need a Unix system with X11,
      and Motif (confirmed to be working on 2.3.8).

      The current version has been tested on the following systems:

		NetBSD (amd64 10.0)

		Debian GNU/Linux (x86_64 12)

      Harp should be portable to other UNIX systems. Please let me know if
      you port it to other systems, and let me know of any changes you had
      to make.


    Obtaining Harp

      You can obtain Harp from

		http://svn.nishi.boats/repo/harp

      using Subversion, or from

		https://github.com/nishiowo/harp

      using Git.


    Building

      There are only way to build Harp for now, simply run:

		make

      or run below if you want to cross‐compile for Windows 32‐bit:

		make PLATFORM=win32

      for 64‐bit:

		make PLATFORM=win64



    Used libraries

      Libwww ‐ the W3C Protocol Library

		https://www.w3.org/Library/

      GIFLIB

		https://sourceforge.net/projects/giflib/

      The Independent JPEG Group’s JPEG software

		https://ijg.org/

      OpenSSL

		https://openssl−library.org/

      libpng

		http://www.libpng.org/pub/png/libpng.html

      zlib

		https://zlib.net/

      cJSON

		https://github.com/DaveGamble/cJSON
