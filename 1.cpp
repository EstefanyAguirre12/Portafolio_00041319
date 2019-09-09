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
	if(num==1){
		return 1;
	}else{
            float a = ((num/r)+r)/2;
            float b = ((num/a)+a)/2;
            
            while((a-b)>0.0001){
                a = ((num/b)+b)/2;
                b = ((num/a)+a)/2;
            }
            return b;
	}
}



int main()
{
    int numero;
    cout<<"Ingrese un numero entero: ";
    cin>>numero;
    
    float r = raiz(numero,1);
	
    cout << "Resultado: " << r << endl;
	
	
}