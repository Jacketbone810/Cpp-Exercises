/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 24, 2018, 4:13 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int x, num;
bool primeflag(int);
int main(int argc, char** argv) {
    cin>>x;
    for(int i=3; i<=x; i=i+2){
        if(primeflag(i)){
            if(primeflag(i+2)){
                cout<<i<<endl<<i+2<<endl;
                num=num+1;
            }
        }
    }
    cout<<"Number of prime numbers is "<<num;
    return 0;
}

bool primeflag(int n){
    bool prime=true;
    for(int d=2; d<n; d=d+1){
        if(n%d==0){
            prime=false;
            break;
        }
    }
    return prime;
}