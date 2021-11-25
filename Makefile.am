SUBDIRS = src

dist_bin_SCRIPTS = bin/cakelisp$(EXEEXT)
CLEANFILES = $(dist_bin_SCRIPTS)

bin/cakelisp$(EXEEXT): src/cakelisp_bootstrap
	src/cakelisp_bootstrap $(CAKELISP_BOOTSTRAP)

TESTS = test/RunTests.cake
LOG_COMPILER = bin/cakelisp$(EXEEXT)
AM_LOG_FLAGS = runtime/$(CAKELISP_RUNTIME)
