#include <iostream>

using namespace std;

int bBinaria(int arr[], int base, int tope, int e){
    int aux;
    aux = (base+tope)/2;

    if(arr[aux]!=e && (base==tope)) return false;
    if(arr[aux]==e) return aux;
    if(arr[aux]<e) return bBinaria(arr, aux+1, tope, e);
    if(arr[aux]>e) return bBinaria(arr, base, aux-1, e);
}

int main(){
    int n=8, e;
    int arr[8]={1,3,4,5,17,18,31,33};
    cout <<"Elemento a buscar: "<<endl;
    cin >> e;
    int posicion = (bBinaria(arr, 0, n-1, e))+1;

    if(bBinaria(arr, 0, n-1, e)) cout << "El elemento se encuentra en la posicion: "<<posicion<<endl;
    else cout << "No se encontro el elemento" <<endl;

    return 0;
}