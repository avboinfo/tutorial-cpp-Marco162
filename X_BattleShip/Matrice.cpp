/*
** Classe creata da noi
** Marco Guarinoni - 13/04/24
*/

#include <iostream>
using namespace std;

const int DIM = 10;

class Matrice{

    private:
        char m[DIM][DIM];
        

    public:
        Matrice(){
             for(int i=0; i<DIM; i++)
                for(int j=0; j<DIM; j++)
                    m[i][j] = 97 + rand()%26;
        }

        Matrice(int n){
            for(int i=0; i<DIM; i++)
                for(int j=0; j<DIM; j++)
                    m[i][j] = n;
        }

        char get(int x, int y){
            return m[x][y];
        }

        void put(int x, int y, char c){
            m[x][y] = c;
        }
        
        void stampa(){
            cout << endl << "--------------------------------------------------------------------------" << endl;
            for(int i=0; i<DIM; i++){
                for(int j=0; j<DIM; j++){
                    printf("%c ", m[i][j]);
                    //cout << m[i][j] << "\t";
                }
                cout << endl;
            }
            cout << endl << "--------------------------------------------------------------------------" << endl;
        }

    void bomb() {
    int x = rand() %DIM;
    int y = rand() %DIM;
    m[x][y] = '*';
    }

    void placeHorizzontalShip(int len) {
        if (len <= 0 || len >= DIM) return;
        int x = rand() %DIM;
        int y = rand() %DIM;
        for (int i=0; i<len; i++)
        m[x][y+i] = 'O';
    }

    void placeVerticalShip(int len) {
        if (len <= 0 || len >= DIM) return;
        int x = rand() %DIM;
        int y = rand() %DIM;
        for (int i=0; i<len; i++)
        m[x+i][y] = 'O';
    }

};

int main(){
    srand(time(NULL));

    Matrice mappa = Matrice('-'); 
    Matrice campo = Matrice('.');  
    
    campo.placeHorizzontalShip(3);
    campo.placeHorizzontalShip(4);
    campo.placeVerticalShip(1);
    campo.placeVerticalShip(5);

    // lancia 20 bombe a caso
    for (int i=0; i<20; i++) {
        int x = rand() %DIM;
        int y = rand() %DIM;
        if (campo.get(x, y) == 'O'){
            mappa.put(x, y, '*');
        }
    }

    mappa.stampa();

    return 0;
}