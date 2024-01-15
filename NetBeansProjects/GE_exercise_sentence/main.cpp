/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on February 8, 2018, 9:41 AM
 */

#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    ofstream fileOut("randnum2.txt" );
    if (!fileOut.is_open()) 
        cout << "Could not open file";
        else {
        for (int ctr =1 ; ctr <= 10; ++ctr ) {
            fileOut<<rand()%100 <<" "<<"\n";
        }
    }
    return 0;
}

