#include "Hash.h"
#include <string>
#include <vector>
#include <iostream>


using std::string;
using std::vector;
using std::cout;
using std::endl;


template <typename T>
Hash<T>::Hash(string key,T v ){

	  k = key;
	  value = v;
	  hashTable = new vector<Entry<T>*>[349];

}

template <typename T>
T Hash<T>::find(string k){
    
    int x = 0;
    x = hashFunction(k);
    vector<Entry<T>*> valueToFind = hashTable[x];
    
    if (valueToFind.empty()){

	  return value;	  
     }
     
	  while(!valueToFind.empty()){
		if(valueToFind.back()->getKey() == k){
 
		return valueToFind.front()->getValue();
		}
    
		valueToFind.pop_back();
	  }	
     

		return value;
}

template <typename T>
void Hash<T>::insert(string k, T v){
     
   int x = 0;

   x = hashFunction(k);
   if(hashTable[x].back()->getKey() == k){
	  hashTable[x].back()->setValue(v);
   }

   hashTable[x].push_back(new Entry<T>(k,v)); 
    
}

template <typename T> 
void Hash<T>::remove(string k){

    int h = 0;
    h = hashFunction(k);
    
    hashTable[h].push_back(new Entry<T>(k, value));

}

template <typename T>
int Hash<T>::hashFunction(string k){
	  int hashSize = k.size();
	  int hash,sum = 0;
	 

	  for(int i=0; i < (int) k.size(); i++){
    	  
		cout<<(int) k[i] << endl;
	
		sum += (int) k[i];
	  }	
    
    
	  hash = sum % hashSize;
    
	  cout << "hash:" << hash << endl;
    
    return hash;
}


template class Hash<int>;
template class Hash<double>;
template class Hash<string>;

