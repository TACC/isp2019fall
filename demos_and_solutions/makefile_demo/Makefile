# Sophisticated make file for building a C++ code
# from multiple sources & header files
# 1/ Variables for program name & compiler options
# 2/ Template rule for compilation
# 3/ Use of `$@' and `$<' macros to simplify rules

# Victor's style tip for Makefiles:
# have an `info' rule that tells you what
# the available targets are.
# the double colon denotes that this target 
#   has multiple rules
info ::
	@echo "This makefile supports the following:"

info ::
	@echo "do: make myprogram"
PROGRAM = myprogram
$(PROGRAM) : separate.o whatever.o
	icpc -o $@ separate.o whatever.o
# if the target is older than the prerequisite,
# then the target needs to be regenerated:
#     execute the rule (wherever you find it)

# variable:
OPTIONS =  -O2 -g

# this is a template rule:
# how to make a .o from the corrresponding .cxx
%.o : %.cxx
	icpc -c $(OPTIONS) $<

# this rule only indicates a dependency:
# if the .h file changes,
# then both targets need to be regenerated
separate.o whatever.o : whatever.h

info ::
	@echo "do: make clean"
clean :
	rm -f *.o *~ ${PROGRAM}
# Note: <TAB> characters for indentation.
# use emacs.
