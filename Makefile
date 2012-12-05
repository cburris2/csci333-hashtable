CPP = g++
CFLAGS = -Wall -Wextra -Werror

all: entry_test hash_test Entry.o Hash.o

Entry.o: Entry.h Entry.cpp
		$(CPP) $(CFLAGS) -c Entry.cpp

entry_test: entry_test.cpp Entry.o 
		$(CPP) $(CFLAGS) -o entrytest entry_test.cpp Entry.o

Hash.o: Hash.h Hash.cpp
		$(CPP) $(CFLAGS) -c Hash.cpp

hash_test: hash_test.cpp Hash.o Entry.o
		$(CPP) $(CFLAGS) -o hashtest hash_test.cpp Hash.o Entry.o

clean: 
	  rm -f *.o; 
	  rm -f entrytest;
	  rm -f *~;

