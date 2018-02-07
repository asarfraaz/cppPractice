# use :set noexpandtab
# This will avoid replacing tab with spaces

LIBS = lib/mobile.o \
	   lib/store.o

PROGRAMS = bin/ayra

all : $(PROGRAMS)

#lib/mobile.o : mobile.cpp mobile.h
	#g++ -c -std=c++11 -o $@ $<
#
#lib/store.o : store.cpp store.h
	#g++ -c -std=c++11 -o $@ $<

# Below line is a generic rule for all the above ones
# https://stackoverflow.com/questions/1576409/in-a-makefile-how-do-i-execute-a-command-on-each-file-name-in-variable

lib/%.o : src/%.cpp include/%.h
	g++ -c -std=c++11 -o $@ $<

bin/ayra : src/main.cpp $(LIBS)
	g++ -std=c++11 -o $@ $^

