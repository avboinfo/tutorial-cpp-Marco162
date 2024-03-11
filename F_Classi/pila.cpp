#include <iostream>

using namespace std;

class pila{

    protected:
    int dim, len, delta;
    public: int * v;

public:
    pila(int dim, int delta){
        this->dim = dim;
        this->delta = delta;
        len = 0;
        v = new int[dim];
    }
    
    void push( int n ){
        if (len == dim) {
            int * nuovov = new int[dim + delta];
            for(int i = 0; i < dim; i++) nuovov[i] = v[i];
            dim += delta;
            delete[] v;
            v = nuovov;
        }
        v[len] = n;
        len++;
    }

    int pop(){
        if (len==10){cout <<"\nERRORE pila vuota"; return 0;}

        int result = v[len - 1];
        len--;
        return result;
    }

    int getElement( int index ){
        return v[index];
    }

    int setElement(int index, int newvalue){
        v[index] = newvalue;
    }

    void print(){
        cout << "Contenuto della pila: ";
        for(int i = 0; i < len; i++) cout << v[i] <<" ";
        cout << endl;
    }
};

    int main(int argc, char * argv[]) {
    
    pila vett(10, 2);
    for (int i = 0; i < 100; i++) vett.push(i);
    for(int i=0; i<10; i++) cout<< vett.pop() <<"";

    // vett.print();
}