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
	  value = v;  /* default value */  
	  hashTable = new list<Entry<T>* >[349]; /* initialize the Table */

}

template <typename T>
Hash<T>::~Hash(){
    delete [] hashTable;  /* remove the Table */

}

template <typename T>
T Hash<T>::find(string k){
		
	  int h = hashFunction(k);    		/* hash the string */
        
	  typename list<Entry<T>* >::iterator it; 

	  if(!hashTable[h].empty()){

		for(it=hashTable[h].begin();it!=hashTable[h].end(); it++){
		   

		   if((*it)->getKey() == k){ 		/* get the key */

			  return (*it)->getValue(); 	/* get the value */
		    }//end if
	  
		}//end for

	  }//end if
            
		return value;
}

template <typename T>
void Hash<T>::insert(string k, T v){
	  int h = hashFunction(k);
	  Entry<T>* temp = new Entry<T>(k,v);
    
	  
	  typename list<Entry<T>* >::iterator it;

	  for(it=hashTable[h].begin();it!=hashTable[h].end(); it++){
		   

		   if((*it)->getKey() == k){

			   
			   (*it)->setValue(v);

			   return;


		    } //end if
	  }//end for
    
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
