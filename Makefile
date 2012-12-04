CPP = g++
CFLAGS = -Wall -Wextra -Werror

all: Entry.o Hash.o entry_test hash_test

Entry.o: Entry.h Entry.cpp
		$(CPP) $(CFLAGS) -c Entry.cpp

entry_test: entry_test.cpp Entry.o 
		$(CPP) $(CFLAGS) -o entrytest $^

Hash.o: Hash.h Hash.cpp
		$(CPP) $(CFLAGS) -c Hash.cpp

hash_test: hash_test.cpp Hash.o
		$(CPP) $(CFLAGS) -o hashtest $^


clean: 
	  rm -f *.o; rm -f entrytest;
	  rm -f *~;

