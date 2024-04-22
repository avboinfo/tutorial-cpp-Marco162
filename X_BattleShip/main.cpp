/*
** Classe creata da noi
** Marco Guarinoni - 20/04/24
*/

#include <iostream>
#include "BattleFieldGood.cpp"
#include "BatleShipGood.cpp"
using namespace std;

int main(){ 
    cout << "Gioco della battaglia navale - Buon divertimento" << endl;
    BattleShip gioco = BattleShip();
    gioco.play();
    cout << "GAME OVER" << endl;

    return 0;
}