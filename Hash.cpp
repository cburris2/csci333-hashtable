#include "Hash.h"
#include <string>
#include <vector>
#include <iostream>
#include <list>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::list;

template <typename T>
Hash<T>::Hash(T v){
	  value = v;
	  hashTable = new list<Entry<T>* >[349];

}

template <typename T>
Hash<T>::~Hash(){
    delete [] hashTable;

}

template <typename T>
T Hash<T>::find(string k){
		
	  int h = hashFunction(k);
        tempHash = new list<Entry<T>* >[349];     
	  while(!hashTable[h].empty()){

    tempHash[h].front()->setValue(hashTable[h].front()->getValue()); 

		    if(hashTable[h].front()->getKey() == k){

			  return hashTable[h].front()->getValue();
		    }//end if

            hashTable[h].pop_front();
	  }//end if
             
		tempHash = hashTable;
            
		return value;
}

template <typename T>
void Hash<T>::insert(string k, T v){
	  int h = hashFunction(k);
	  Entry<T>* temp = new Entry<T>(k,v);
    
	  
		    if(hashTable[h].front()->getKey() == k){


			   hashTable[h].front()->setValue(v);
			   
		    }//end if


    
	  hashTable[h].push_back(temp);
}
template <typename T> 
void Hash<T>::remove(string k){
	  insert(k,value);

}
template <typename T>
int Hash<T>::hashFunction(string k){
	  int hashLen = 349;
	  int hash,sum = 0;
	 

	  for(int i=0; i < (int) k.size(); i++){
    	  
		cout<<(int) k[i] << endl;
	
		sum += (int) k[i];
	  }	
    
    
	  hash = sum % hashLen;
    
	  cout << "hash:" << hash << endl;
    
    return 0;
}


template class Hash<int>;
template class Hash<double>;
template class Hash<string>;
