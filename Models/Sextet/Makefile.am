BUILT_SOURCES  = Sextet__all.cc
CLEANFILES = Sextet__all.cc

Sextet__all.cc : $(DIR_H_FILES) $(DIR_CC_FILES) Makefile
	@echo "Concatenating .cc files into $@"
	@$(top_srcdir)/cat_with_cpplines $(DIR_CC_FILES) > $@

EXTRA_DIST = $(ALL_H_FILES) $(ALL_CC_FILES)

DIR_H_FILES = $(addprefix $(srcdir)/,$(ALL_H_FILES))
ALL_H_FILES = \
SextetParticles.h \
SextetModel.h SextetModel.fh \
SextetGSSVertex.h  \
SextetGGSSVertex.h \
SextetGVVVertex.h  \
SextetGGVVVertex.h \
SextetFFSVertex.h \
SextetFFVVertex.h

DIR_CC_FILES = $(addprefix $(srcdir)/,$(ALL_CC_FILES))
ALL_CC_FILES = \
SextetModel.cc      \
SextetGSSVertex.cc  \
SextetGGSSVertex.cc \
SextetGVVVertex.cc  \
SextetGGVVVertex.cc \
SextetFFSVertex.cc  \
SextetFFVVertex.cc  
