#include <iostream>
#include <string>

using namespace std;

class Coda {

private:

    int size, start, stop;
    int * v;

public:

    Coda(string name, int size){
        this->name = name;
        this->size = size;
        v = new int[size];
        start = stop = 0;
    } 

    void enter(int val){
        if(stop >= size){cout << "coda piena!"; return;}
        v[stop] = val;
        stop ++;
    }

    int exit(){
        if(start >= stop ){
            cout<<" coda vuota!";
            return -1;
        }
        int val = v[start];
        start = start + 1;
        return val;
    }

    void stampa(){
        cout <<"Elementi in coda " << name << ": ";
        for(int i=start; i<stop; i++) cout << v[i] << "";
        cout << endl;
    }

   
        

};