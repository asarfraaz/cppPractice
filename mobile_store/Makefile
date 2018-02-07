# use :set noexpandtab
# This will avoid replacing tab with spaces

OBJS = obj/mobile.o \
	   obj/store.o

PROGRAMS = bin/ayra

all : $(PROGRAMS)

#lib/mobile.o : mobile.cpp mobile.h
	#g++ -c -std=c++11 -o $@ $<
#
#lib/store.o : store.cpp store.h
	#g++ -c -std=c++11 -o $@ $<

# Below line is a generic rule for all the above ones
# https://stackoverflow.com/questions/1576409/in-a-makefile-how-do-i-execute-a-command-on-each-file-name-in-variable

obj/%.o : src/%.cpp include/%.h
	g++ -c -std=c++11 -Iinclude -o $@ $<

bin/ayra : src/main.cpp $(OBJS)
	g++ -std=c++11 -Iinclude -o $@ $^

