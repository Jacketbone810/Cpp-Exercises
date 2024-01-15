/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 29, 2018, 9:58 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int myArr[20];
    int i=0;
    int fib_m1=1;
    int fib_m2=0;
    int fib=0;
    for(i=0;i<20;i++){
        if(i<20){
          myArr[i]=fib;
          cout<<myArr[i]<<endl;
        }
        //cout<<"Fibonacci("<<i<<")="<<fib<<endl;
        fib=fib_m1+fib_m2;
        fib_m1=fib_m2;
        fib_m2=fib;
    
    }
    return 0;
}

