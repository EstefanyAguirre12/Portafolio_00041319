/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: uca
 *
 * Created on 9 de septiembre de 2019, 12:17
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int func(int n){
    int r=0;
    if(n==0){
          return(0);
  
    }
    else{
        for(int i; i < n;i++){
            r += n-i;
        }
        return r;
  
    }
}
int main(int argc, char** argv) {
    
    cout<<func(5);
    return 0;
}

