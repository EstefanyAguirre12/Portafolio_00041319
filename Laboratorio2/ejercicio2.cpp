/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: uca
 *
 * Created on 9 de septiembre de 2019, 11:05
 */

#include <iostream>

using namespace std;


float raiz(int num, int r){
	
            float a = ((num/r)+r)/2;
            float b = ((num/a)+a)/2;
            float resta= a-b;
            if(resta<0.000001){
                return b;
            }
            else{
                r=b;
                raiz(num, r);
            }
          
	
}



int main()
{
    int numero;
    cout<<"Ingrese un numero entero: ";
    cin>>numero;
    if(numero<0){
      cout<<"Solo numeros positivos";  
    }else{
    float r = raiz(numero,1);
	
    cout << "Resultado: " << r << endl;
    }
	
}