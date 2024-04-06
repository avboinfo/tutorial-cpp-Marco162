#include <iostream>
#include <string>
#include "Coda.cpp"
#include "poste.cpp"

using namespace std;

int main() {
    c.enter(85);
    c.exit();
    c.enter(280);
    c.stampa();

    int servizio;
    cout << "scegli uno tra i seguenti servizi:\n 1:SPEDIZIONE\n 2:RICEZIONE\n 3:FINANZIARIA\n:";
    cin >> servizio;

    if (servizio == 1){
            poste p = poste("spedizione")
        }
        else if(servizio == 2){
            poste p = poste("ricezione")
        }
        else if(servizio == 3){
            poste p = poste("finanziaria")
        }

    return 0;
}