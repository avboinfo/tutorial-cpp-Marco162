/*
Classe creata da noi
Marco Guarinoni 13/04/24
*/

#include <iostream>
using namespace std;

class Matrice{

    private:
        int m[10][10];

    public:
        Matrice(int n){
            for(int i=0; i<10; i++)
                for(int j=0; j<10; j++)
                    m[i][j] = n;
        }

        void stampa(){
            cout << "__________________________";
            for(int i=0; i<10; i++){
                for(int j=0; j<10; j++){
                    cout << m[i][j] << "\t";
                }
                cout << endl;
            }
            cout << "__________________________";
        }


};

int main(){
    Matrice m1 = Matrice(3);
    m1.stampa();

    return 0;
}