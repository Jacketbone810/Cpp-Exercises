/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 22, 2018, 9:21 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int a;
    do{
        cout<<"type in the letter e: ";
        cin>>a;
        cout<<"you typed an "<<a<<endl;
    }
    while(a!='e');
    return 0;
}

