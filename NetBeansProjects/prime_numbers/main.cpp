/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 23, 2018, 3:17 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int x,y;
    int num=0;
    cout<<"What number do you want to look at all he primes for: ";
    cin>>x;
    cout<<"The primes are:"<<endl;
    for(y=2;y<x;y++){
        if(y<10&&(y%4!=0)&&(y%6!=0)&&(y%8!=0)&&(y%9!=0)){
            cout<<y<<", ";
            num=4;
            }
        if((y<=x&&y>=10)&&((y%1==0)&&(y%y==0)&&(y%2!=0)&&(y%3!=0)&&(y%4!=0)&&(y%5!=0)&&(y%6!=0)&&(y%7!=0)&&(y%8!=0)&&(y%9!=0))){
            cout<<y<<", ";
            num=num+1;
        }  
    }
            cout<<""<<endl;
    cout<<"There are "<<num<<" prime numbers less than "<<x;
    return 0;
}

