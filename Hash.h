#ifndef __HASH_H__
#define __HASH_H__

#include "Entry.h"
#include <string>
#include <vector>


class Hash{
    
    private:
     String k;
     T value;
     Vector<Entry<T>* >* hashTable[349];     

    public:
     T find(T v);
     void insert(String k, T v);
     void remove(String k, T v);
     int hashFunction(String key); 



}
#endif



