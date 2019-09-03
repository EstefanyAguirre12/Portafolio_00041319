#include <iostream>

using namespace std;

int main()
{
    int edades[5][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    int filas = (sizeof(edades)/sizeof(edades[0]));
    int columnas = (sizeof(edades[0])/sizeof(edades[0][0]));
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<edades[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    
     for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if((i==1 && j==0) || (i==2 && j==0) ||(i==2 && j==1) ||(i==3 && j==0) ||(i==3 && j==1) ||(i==3 && j==2) ||(i==4 && j==0) ||(i==4 && j==1) ||(i==4 && j==2) ||(i==4 && j==3)){
                
            }else{
                cout<<"Ingrese un numero: ";
                cin>>edades[i][j];   
            }
        }
    }
    
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<edades[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}