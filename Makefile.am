SUBDIRS = doc

dist_bin_SCRIPTS = bin/cakelisp$(EXEEXT)
CLEANFILES = $(dist_bin_SCRIPTS)

bin/cakelisp$(EXEEXT): $(CAKELISP_BUILD)
	$(CAKELISP_BUILD)

TESTS = test/RunTests.cake
LOG_COMPILER = bin/cakelisp$(EXEEXT)
AM_LOG_FLAGS = $(CAKELISP_TEST_FLAGS)
