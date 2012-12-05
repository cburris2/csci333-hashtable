#include "Hash.h"
#include <iostream>

using std::cout;
using std::endl;

int main(){

    Hash<int>* h = new Hash<int>(0);

    h->insert("n", 5);

    h->insert("o", 7);
    
    cout << "find o : " << h->find("o") << endl;
    
    h->remove("n");

    cout << "find n : " << h->find("n") << endl;
    
    
    delete h;



    Hash<double>* dh = new Hash<double>(1.2);
    dh->insert("data", 10);
    
    dh->insert("entry", 10);
    
    cout << dh->find("data") << endl;

    dh->remove("data");

    cout << dh->find("data") << endl;
    
    
    delete dh;


    Hash<std::string>* sh = new Hash<std::string>("hi");
    sh->insert("data", "structures");
    
    sh->insert("happy", "gilmore");

    cout << sh->find("data") << endl;

    sh->remove("data");

    cout << sh->find("data") << endl;
    
    
    delete sh;


return 0;

}
