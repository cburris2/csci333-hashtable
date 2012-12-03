#ifndef __ENTRY_H__
#define __ENTRY_H__

#include <string>

using std::string;

template <typename T>

class Entry {

    private:
    
      string t;
      T value;
	  
    public:

      Entry(string k, T v);
      string getKey();
      T getValue();
      void setValue(T value);
    


};
#endif
