#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *sig;
} *inicio;

class Pila{
    public:
        Nodo* crearNodo(int valor){
            Nodo *n = new Nodo;
            n -> dato = valor;
            n -> sig = nullptr;
            return n;
        }

        void push(int valor){
            Nodo *n = crearNodo(valor);
            n->sig = inicio;
            inicio = n;
        }

        /*void pop(){
            Nodo *temp = inicio;
            inicio = inicio -> sig;
            free(temp);
        }*/

        void mostrarPila(){
            Nodo *temp = inicio;
            if(!inicio)
                cout << "Pila vacía" << ",";
            else
                while(temp){
                    cout << temp -> dato << ", ";
                    cout << endl;
                    temp = temp -> sig;  
                }
        }

        Pila(){
            inicio = nullptr;
        }
};

int main(){

    return 0;
}