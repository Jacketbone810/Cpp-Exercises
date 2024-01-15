/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 9, 2018, 5:11 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int i=0;
    int fib_m1=1;
    int fib_m2=0;
    int fib=0;
    for(i=0;i<20;i++){
        cout<<"Fibonacci("<<i<<")="<<fib<<endl;
        fib=fib_m1+fib_m2;
        fib_m1=fib_m2;
        fib_m2=fib;
    }
    }
    return 0;
}

