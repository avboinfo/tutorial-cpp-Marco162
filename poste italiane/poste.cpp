#include <iostream>
#include <string>
#include "Coda.cpp"
#include "main.cpp"

using namespace std;

class poste
{
private:
   int S, R, F;

public:
   
    poste(int servizio){
    
    }

    void spedizione(){
        cout <<"sei entrato nella coda SPEDIZIONE" << endl;
    }

    void ricezione(){
        cout <<"sei entrato nella coda RICEZIONE" << endl;
    }

    void finanziaria(){
        cout <<"sei entrato nella coda FINANZIARIA" << endl;
    }

};
