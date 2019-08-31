#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *sig;
} *inicio;

class Pila{
    public:
        Nodo *inicio;
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

        int tamanoPila(){
            Nodo *temp = inicio;
            int cont = 0;
            if(!inicio)
                return 0;
            else
                while(temp){
                    temp = temp -> sig;
                    cont++;
                }
            return cont;
        }

        Pila(){
            inicio = nullptr;
        }
};

int main(){

    int n, i, num;

    Pila par, impar;


    cout << "Cantidad de numeros que ingresará: ";

    cin >> n;

    for (i = 0; i < n; i++){
        cout << "Ingrese numero: ";
        cin>> num;
        
        if(num%2==0){
            par.push(num);
        }
        else
           impar.push(num);
        
    }
    
    cout << "Tamaño par: " << par.tamanoPila() <<endl;
    cout << "Tamaño impar: " << impar.tamanoPila() << endl;
 
    return 0;
}