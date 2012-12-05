#ifndef __HASH_H__
#define __HASH_H__

#include "Entry.h"
#include <string>
#include <vector>
#include <list>
using std::string;
using std::vector;
using std::list;

template <typename T>
class Hash{
    
    private:
     T value;
     list<Entry<T>* >* hashTable;     
     int hashSize;

    public:
     Hash();
     ~Hash();
     T find(string key);
     void insert(string k, T v);
     void remove(string k);
     int hashFunction(string key); 



};
#endif
