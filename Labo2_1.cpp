#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *sig;
};

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

    Pila pares, impares;


    cout << "Cantidad de numeros que ingresará: ";

    cin >> n;

    for (i = 0; i < n; i++){
        cout << "Ingrese numero: ";
        cin>> num;
        
        if(num%2==0){
            pares.push(num);
        }
        else
           impares.push(num);
        
    }

    cout << "Elementos pila numeros pares: "<< endl;
    pares.mostrarPila();
    cout << "Elementos pila numeros impares: "<<endl;
    impares.mostrarPila();
    cout << "--------------"<<endl;

    if(pares.tamanoPila() == impares.tamanoPila()){
        cout << "Tamaño de Pilas es Igual!" <<endl;
        cout << "Tamaño Pila numeros Pares: " << pares.tamanoPila()<<endl;
        cout << "Tamaño Pila numeros impares: " << impares.tamanoPila()<<endl;
    }
    else{
        cout << "Las pilas no poseen la misma cantidad de elementos"<<endl;
        cout << "Tamaño Pila numeros Pares: " << pares.tamanoPila()<<endl;
        cout << "Tamaño Pila numeros impares: " << impares.tamanoPila()<<endl;
    }

    return 0;
}