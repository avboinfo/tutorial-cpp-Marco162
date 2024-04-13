#include <iostream>
#include <string>
#include "Coda.cpp"
#include "poste.cpp"

using namespace std;

int main() {
    bool valido = true;
    char risposta;

    while (valido) {
        cout << "Benvenuto in Poste Italiane\n" << endl;
        cout << "Seleziona servizio [1-3]: " << endl;
        cout << "1. Spedizione (s)" << endl;
        cout << "2. Ricezione (r)" << endl;
        cout << "3. Finanzarie (f)" << "\n:";
        int scelta;
        cin >> scelta;

        Poste p;
        Poste p1;
        Poste p2;

        switch (scelta) {
            case 1:
                p = Poste("spedizione");
                p.stampa();
                break;
            case 2:
                p1 = Poste("ricezione");
                p1.stampa();
                break;
            case 3:
                p2 = Poste("finanzarie");
                p2.stampa();
                break;
            default:
                cout << "Servizio non disponibile" << endl;
                valido = false;
                break;
        }
        cout << "Vuoi continuare? [s/n]: ";
        cin >> risposta;
        if (tolower(risposta) == 'n'){
            valido = false;
        }

    }
    return 0;
}