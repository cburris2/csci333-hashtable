#include "Hash.h"
#include <string>
#include <vector>

template <typename T>
Hash<T>::Hash(String key){

	  k = key;
    
}

template <typename T>
T Hash<T>::find(T v){


}

template <typename T>
void Hash<T>::insert(String k, T v){


}

template <typename T> 
void Hash<T>::remove(String k, T v){


}

template <typename T>
int Hash<T>::hashFunction(String k){
	  int hashSize = k.size();
	  int hash = 0;
 
	  for(int i=0; i < (int) k.size(); i++){
    	  
		cout<<(int) s[i] << endl;
	
		int sum += (int) s[i];
	  }	
    
    
	  hash = sum % hashSize;
    
	  cout << "hash:" << hash << endl;
    
    return hash;
}



