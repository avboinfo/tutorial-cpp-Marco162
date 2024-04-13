#include <iostream>
#include <string>
#include <cctype>
#include "Coda.cpp"


using namespace std;

class Poste {
private:
    string servizio;
    int nR = 0, nS = 0, nF = 0, numeroSpedizione = 0, numeroRicezione = 0, numeroFinanziaria = 0;
    Coda cR = Coda(1000, "ricezione");
    Coda cS = Coda(1000, "spedizione");
    Coda cF = Coda(1000, "finanzarie");
    
    
public:
    Poste(){}
    Poste(string servizio){
        this->servizio = servizio;
        if (servizio == "spedizione"){
            addClient('s');
        } else if (servizio == "ricezione"){
            addClient('r');
        } else if (servizio == "finanzarie"){
            addClient('f');
        } else {
            cout << "Servizio non disponibile" << endl;
        }

    }

    int addClient(char service){
        switch (service)
        {
        case 's':
            cR.enter(++nR);
            spedizione();
            return cR.exit();
        case 'r':
            cS.enter(++nS);
            ricezione();
            return cS.exit();
        case 'f':
            cF.enter(++nF);
            finanzarie();
            return cF.exit();
        default:
            cout << "Servizio non disponibile" << endl;
            return -1;
        }

    }

    void spedizione(){
        cout << "Servizio di spedizione" << endl;
    }

    void ricezione(){
        cout << "Servizio di ricezione" << endl;
    }

    void finanzarie(){
        cout << "Servizio finanzarie" << endl;
    }

    void stampa(){
        cout << "Servizio di " << servizio << endl;
        cout << "Clienti in coda: " << endl;
        cout << "Ricezione: ";
        cR.stampa();
        cout << "Spedizione: ";
        cS.stampa();
        cout << "Finanzarie: ";
        cF.stampa();
    }

    void utentiCoda(){
        if(servizio == s{
            numeroSpedizione++;
            cout << "il numero del tuo biglietto è: " << numeroSpedizione << endl; 
        }
        if(servizio == to_string(1)){
            numeroSpedizione++;
            cout << "il numero del tuo biglietto è: " << numeroSpedizione << endl; 
        }
    }

};