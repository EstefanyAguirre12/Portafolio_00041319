#include <iostream>

using namespace std;

int main(int argc, char** argv) {
        int numero, invertido=0;
     
        cout<< "Ingresa un numero:"; 
        cin>> numero;
     
        while(numero > 0){ 
            invertido = invertido *10 + (numero % 10); 
            numero = numero/10; 
        }
     
        cout<<"El numero invertido es:" << invertido;
    return 0;
}