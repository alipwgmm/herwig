#!/opt/local/bin/perl -pi
# Doc/fixinterfaces.pl.  Generated from fixinterfaces.pl.in by configure.
#
s|<interface>(.+?)::(.+?)</interface>|<a href="\1Interfaces.html#\2"><code>\1::\2</code></a>|g;
s|<interface>(.+?)</interface>|<a href="#\1"><code>\1</code></a>|g;
