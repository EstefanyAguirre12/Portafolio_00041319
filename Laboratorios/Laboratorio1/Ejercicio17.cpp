#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int suma=0, i=0, j=0;
    double promedio=0;
    int arreglo[10];
    
    while(i<10){
        
        cout<<"Ingrese un numero: ";
        cin>>arreglo[i];
        i++;
    }
    while(j<10){
        suma= suma + arreglo[j];
        j++;
    }
    promedio=double(suma)/10;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Promedio: "<<promedio<<endl;
        
    return 0;
}