//Estefany Elizabeth Aguirre Recinos 00041319
#include <iostream>
using namespace std;

/*
 * 
 */
void medianaa(int *p, int n){
     int mediana, a, posicion; 
    float m;
      
    if(n%2==0){
        a = n/2;
        m = (float(*(p +(a-1)))+float(*(p+a)))/2;
        cout<<"Mediana: "<<m;
    }else{
        a = n/2;
        posicion = a + 0.5;
        mediana=*(p+posicion);
        cout<<"Mediana: "<<mediana;
    }
}



int main(int argc, char** argv) {
    int n;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;
    
    int arreglo[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Ingrese un numero: ";
        cin >> arreglo[i];
    }
    medianaa(arreglo, n);

    
    
    return 0;
}

