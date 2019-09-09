# include <iostream>

using namespace std;

void MoverTorres(int n, int c1, int c2, int c3){

    if ( n > 1 ){
        MoverTorres( n - 1, c1, c3, c2);
        cout <<"Se movio el disco " <<  n  << " de " << c1 << " a " <<  c3 ;
        MoverTorres( n - 1, c2, c1, c3);
    }

    if ( 1 == n )
    cout << "\nSe movio el disco 1 de " << c1 << " a " << c3 << endl;

}

int main(){

int Discos;

cout << "Ingrese el numero de discos: ";
cin >> Discos;

MoverTorres( Discos, 1, 2, 3);


return 0;

}