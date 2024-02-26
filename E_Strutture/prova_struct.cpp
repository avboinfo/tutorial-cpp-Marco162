/*
** prova_struct.cpp
** Author: IAV 3CIN
** 28/02/2021
*/

#include <iostream>

using namespace std;

/* Il tipo di dato "struct" serve per memorizzare dati di tipi uguali o diversi
** nella stessa struttura, per poter accedere a ciascuno dei membri 
** attraverso il nome unico della struttura.
*/

struct persona
{

    string nome;
    int eta;
};

typedef struct {int uno; int due;} COPPIA;

int main()
{
  struct persona gigi, gigietto;
  COPPIA coppia_eta;
  coppia_eta.uno = 17;
  coppia_eta.due = 7;
  
  gigi.nome="Luigi";
  gigi.eta = coppia_eta.uno;
  gigietto.nome = "Luigino";
  gigietto.eta = coppia_eta.due;

  cout << "-------------------------------------------------" << endl;
  cout << "-------------------------------------------------" << endl;
  cout << "gigi si chiama: "<< gigi.nome << ", e ha: " << gigi.eta << " anni" << endl;
  cout << "gigietto si chiama: "<< gigietto.nome << ", e ha: " << gigietto.eta << " anni" << endl;
  cout << "-------------------------------------------------" << endl;
  cout << "-------------------------------------------------" << endl;
    return 0;
}
