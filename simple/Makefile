PROGRAMS = hello hello_std
all : $(PROGRAMS)

hello : hello.cpp
	g++ -o $@ $<

hello_std : hello_std.cpp
	g++ -o $@ $<

clean :
	rm $(PROGRAMS)
