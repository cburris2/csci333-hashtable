CPP = g++
CFLAGS = -Wall -Wextra -Werror


entry_test: entry_test.cpp Entry.o 
		$(CPP) $(CFLAGS) -o entrytest $^







clean: 
	  rm -f *.o
	  rm -f *~;
