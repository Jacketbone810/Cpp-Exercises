/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 11, 2018, 9:57 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int a;
    cout<<"type in a value for a ";
    cin>>a;
    if(a>100){
        if(a>1000){
            cout<<a<<" is really big!";
        }
    }
    else{
        cout<<a<<" is kind of big";
    }
    return 0;
}

