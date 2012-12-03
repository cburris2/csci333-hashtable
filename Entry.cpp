#include "Entry.h"
#include <string>

using std::string;

template <typename T>
Entry<T>::Entry(string k, T v){
	      
	  t = k;
	  value = v;

}

template <typename T>
T Entry<T>::getValue(){

    return value;  

}

template <typename T>
string Entry<T>::getKey(){

    return t;    

}

template <typename T>
void Entry<T>::setValue(T v){
    
    value = v; 

}



template class Entry<int>;
template class Entry<double>;
template class Entry<string>;
