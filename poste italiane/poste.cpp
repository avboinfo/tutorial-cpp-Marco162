#include <iostream>
#include <string>
#include "Coda.cpp"

using namespace std;

class Poste
{
private:
   int S, R, F;
   string nome;
   Coda cR, cS, cF;
   int nR, nS, nF;

public:
   
    Poste( string nome) {
        this->nome = nome;
        cR = Coda("Ricezione", 1000);
        cS = Coda("Spedizione", 1000);
        cF = Coda("Finanziaria", 1000);
        nR = nS = nF = 1;
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

        int nuovoCliente( char servizio ) {
            switch ( servizio ) {
                case 'r':
                    cR.enter(nR ++);
                    break;
                case 's':
                    cS.enter(nS ++);
                    break;
                case 'f':
                    cF.enter(nF ++);
                    break;
                default:
                    cout << "questo servizio te lo fai da solo!!!!!!!!!" << endl;
            }
        }
   
        void chiamaCliente(char servizio){
            switch ( servizio ) {
                case 'r':
                    cR.exit(nR ++);
                    break;
                case 's':
                    cS.exit(nS ++);
                    break;
                case 'f':
                    cF.exit(nF ++);
                    break;
                default:
                    cout << "questo servizio te lo fai da solo!!!!!!!!!" << endl;
            }
        }
   
        void stampaTabellone(){
            cout <<"Tabellone dell'ufficio postale: "<< nome << endl;
            cs->
        }
};
