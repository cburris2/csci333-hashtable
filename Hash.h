#ifndef __HASH_H__
#define __HASH_H__

#include "Entry.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

template <typename T>

class Hash{
    
    private:
     string k;
     T value;
     vector<Entry<T>* >* hashTable;     

    public:
     Hash(string key, T v);
     T find(string key);
     void insert(string k, T v);
     void remove(string k);
     int hashFunction(string key); 



};
#endif



