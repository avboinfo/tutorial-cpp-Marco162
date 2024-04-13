/*
** Bicicletta.cpp
*/

#include <iostream>
using namespace std;

class Bicicletta {
  public:

    int raggio;
    string colore;

    Bicicletta() 
    {
        raggio = 10;
        colore = "bianco";
    }

    Bicicletta(int r, string c) 
    {
        raggio = r;
        colore = c;
    }

    void presentati() {
        cout << "-------------------------------------------------" << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "Buongiorno, sono una bici di colore " << colore << " e con le ruote " << raggio << "!" << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "-------------------------------------------------" << endl;
    }
};

int main()
{
    Bicicletta x;
    x.presentati();
    
    Bicicletta y(12, " Rosso");
    y.presentati();
    return 0;
}




} else {
            cout << "Nessun cliente in attesa per servizio ";
            switch (servizio) {
                case Servizio::Spedizione:
                    cout << "di spedizione." << endl;
                    break;
                case Servizio::Ricezione:
                    cout << "di ricezione." << endl;
                    break;
                case Servizio::Finanziario:
                    cout << "finanziario." << endl;
                    break;
            }
        }
    }
