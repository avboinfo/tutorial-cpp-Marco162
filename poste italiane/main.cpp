#include <iostream>
#include <string>
#include "Coda.cpp"
#include "poste.cpp"

using namespace std;

int main() {
    
    Coda c = Coda(1000);

    c.enter(355);
    c.exit();
    c.enter(5);
    c.stampa();

    cout << "Seleziona servizio [1-3]: " << endl;
    cout << "1. Spedizione" << endl;
    cout << "2. Ricezione" << endl;
    cout << "3. Finanzarie" << "\n:";
    int servizio;
    cin >> servizio;

    if (servizio == 1){
        Poste p = poste("spedizione");
    } else if (servizio == 2){
        Poste p = poste("ricezione");
    } else if (servizio == 3){
        Poste p = poste("finanzarie");
    } else {
        cout << "Servizio non disponibile" << endl;
    }

    
    return 0;
}