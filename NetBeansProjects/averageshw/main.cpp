/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 12, 2018, 6:50 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int a,b,c,d,e;
    cout<<"Please put in the first number: ";
    cin>>a;
    cout<<"Now the second, please: ";
    cin>>b;
    cout<<"Now the third: ";
    cin>>c;
    cout<<"The fourth: ";
    cin>>d;
    cout<<"You guessed it, now the fifth number: ";
    cin>>e;
    cout<<"The average of those numbers is "<<(a+b+c+d+e)/5.0;
    return 0;
}

