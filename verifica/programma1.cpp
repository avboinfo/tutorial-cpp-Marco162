#include <iostream>
#include <string>

using namespace std;

void riempiMatrice(int matrice1[10][10]) {
    srand(time(NULL)); 
    for (int i=0; i<10; i++) {
    for (int j=0; j<10; j++) {
            matrice1[i][j] = rand() %100;
        }
    }
}

void stampaMatrice(int matrice1[10][10]){
    for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
            cout << matrice1[i][j] <<" "; 
        }
        cout << endl;
    }
}
int trovaNumero(int matrice1[10][10], int n){
    int c = 0;
    for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
            if(matrice1[i][j] == n){
                c++;
            }
        }
    }
    return c;
}
int trovaDiag(int matrice[10][10], int num) {
    int c = 0;
    for(int i=0; i<10; i++) {
        if(matrice[i][i] == num) {
            c++;
        }
    }
    return c;
}



int main() {
srand(time(NULL));

int num;
int matrice1[10][10];

riempiMatrice(matrice1);
stampaMatrice(matrice1);

cout << endl;
cout << "Ciao, scrivi un numero " << endl;
cin >> num;

int c = trovaNumero(matrice1, num);
cout << endl;
cout << "Il numero" << num << " si trova nella matrice " << c << "volte";

int c2 = trovaDiag(matrice1, num);
cout << "\nIl numero " << num << "si trova nella diagonale " << c2 << "volte\n";

    return 0;
}

