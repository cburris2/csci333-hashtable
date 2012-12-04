CPP = g++
CFLAGS = -Wall -Wextra -Werror

all: Entry.o Hash.o

entry_test: entry_test.cpp Entry.o 
		$(CPP) $(CFLAGS) -o entrytest $^

Hash.o: Hash.h Hash.cpp
		$(CPP) $(CFLAGS) -c Hash.cpp





clean: 
	  rm -f *.o; rm -f entrytest;
	  rm -f *~;

