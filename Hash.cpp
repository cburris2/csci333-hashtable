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
Hash<T>::Hash(){

	  //value = v;    			/* default value */ 
	  hashSize = 349;			/* size of the table */
	  hashTable = new list<Entry<T>* >[hashSize];	/* entry */

/*
	  for(int i=0; i < hashSize; i++) {
		    hashTable.push_back(entry);

	  }
*/
}

template <typename T>
Hash<T>::~Hash(){

    delete [] hashTable;
}
/*
template <typename T>
T Hash<T>::find(string k){
    
    int x = 0;

    x = hashFunction(k);  */  /* get the value for the key */
  /*  if(!hashTable[x].empty()){ 
    // vector< vector<Entry<T>* > > hashTable;     
    typename vector<Entry<T>* >::iterator it;  
    for(it=hashTable[x].begin(); it!=hashTable[x].end(); it++){ 
     
		
		if((*it)->getKey() == k){ 
 
			return (*it)->getValue();
		}

	  }
    }
	  while(!valueToFind.empty()){ 

		if(valueToFind.back()->getKey() == k){
 
			return valueToFind.back()->getValue();
		}
    
		valueToFind.pop_back();
	  }	
     

		return value;
}*/

template <typename T>
void Hash<T>::insert(string k, T v){
     
    int x = hashFunction(k);
    
    Entry<T>* temp = new Entry<T>(k,v);
    
    
    typename list<Entry<T>* >::iterator it;  
    
    for(it=hashTable[x].begin(); it!=hashTable[x].end(); it++){ 

	  if((*it)->getKey() == k){
		 (*it)->setValue(v);
		 return;
	  }
    
    }
    hashTable[x].push_back(temp); 
    
}

template <typename T> 
void Hash<T>::remove(string k){

    int h = 0;
    h = hashFunction(k);
    
    //hashTable[h].push_back(Entry<T>(k, value));

}

template <typename T>
int Hash<T>::hashFunction(string k){
	  int hashLen = k.size();
	  int hash,sum = 0;
	 

	  for(int i=0; i < (int) k.size(); i++){
    	  
		cout<<(int) k[i] << endl;
	
		sum += (int) k[i];
	  }	
    
    
	  hash = sum % hashLen;
    
	  cout << "hash:" << hash << endl;
    
    return hash;
}


template class Hash<int>;
//template class Hash<double>;
//template class Hash<string>;
