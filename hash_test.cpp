#include "Hash.h"

#include <iostream>

using std::cout;
using std::endl;

int main(){



Hash<int>* h = new Hash<int>(0);


//h->insert("n", 10);

cout << h->find("nub") << endl;
//cout << h->find("nub") << endl;

//h->remove("nub");




return 0;

}
