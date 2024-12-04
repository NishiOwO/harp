.\" $Id$
.de f1
.       ps 12
.       vs 14
..
.de f2
.	ft CB
.       ps 20
.       vs 22
..
.de f3
.	ft CB
.       ps 40
.       vs 42
..
.de t1
.       bp
.       t2 "\\$1"
..
.de t2
.       sp
.       ce
.       f2
\\$1
.       ft P
.       f1
.       sp
.       nf
..
.de NS
.	sp
.	in -0.25in
.	f2
\\$1
.	ft P
.	f1
.	in +0.25in
.	sp
..
.ll 6.5in
.pl 11in
.po 1c
.sp |0
.in 0.25in
.ft CR
.f1
.ad r
Harp Installation Instructions
.ce
.ad l
.t2 "INSTALLATION INSTRUCTIONS"
.NS "Requirements"
To install this version of Harp, you will need a Unix system with X11,
and Motif (confirmed to be working on 2.3.8).
.sp
The current version has been tested on the following systems:
.in +1in
.sp
NetBSD (amd64 10.0)
.sp
Debian GNU/Linux (x86_64 12)
.sp
.in -1in
Harp should be portable to other UNIX systems. Please let me know if
you port it to other systems, and let me know of any changes you had
to make.
.NS "Obtaining Harp"
You can obtain Harp from
.sp
.in +1in
http://svn.nishi.boats/repo/harp
.in -1in
.sp
using Subversion, or from
.sp
.in +1in
https://github.com/nishiowo/harp
.in -1in
.sp
using Git.
.NS "Building"
