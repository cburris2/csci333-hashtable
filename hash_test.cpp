#include "Hash.h"
#include <iostream>

using std::cout;
using std::endl;

int main(){

    Hash<int>* h = new Hash<int>();
    cout << "started " << endl;
    h->insert("n", 10);

    cout << "inserted " << endl;
//    cout << h->find(0) << endl;
    //cout << h->find("nub") << endl;

    //h->remove("nub");

    delete h;

return 0;

}
