/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on February 3, 2018, 11:46 AM
 */

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int findPrimes(vector<int>tempvec, int primeCheck);
void printPrimes(vector<int>tempvec2, int j);

int main(int argc, char** argv) {
    int intMax;
    vector<int>p_vec;
    int m=p_vec.size();
    cout<<"What number you want to find primes less than?"<<"   ";
    cin>>intMax; 
    findPrimes(p_vec, intMax);
    printPrimes(p_vec, intMax);
    cout<<"There are "<<m<<" primes less than "<<intMax<<endl;
    for(int i=0; i<p_vec.size(); i++){
        cout<<"The prime numbers are "<<p_vec[i]<<",";
    }
    return 0;
}

int findPrimes(vector<int>tempvec, int primeCheck){
    /*float sqrPrime=sqrt(primeCheck);
        cout<<sqrPrime;
    for(int i=0; i<sqrPrime; i++){
        if (primeCheck%i!=0){
            tempvec.push_back(i);
        }
        
    }*/

    for (int i=2; i<primeCheck; i++) 
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
                break;
            else if (j+1 > sqrt(i)) {
                cout << i << " ";
                tempvec.push_back(i);
            }

        }   
    cout<<endl;
    return 0;
}

void printPrimes(vector<int>tempvec2, int j){
    int k=findPrimes(tempvec2,j);
    cout<<k;
} 