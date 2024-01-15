/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on February 5, 2018, 9:30 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
void printArray(float pArray[][4], int nRows){
    for(int i=0; i<nRows; i++){
        for(int j=0; j<4; j++)cout<<pArray[i][j]<<"     ";   
        cout<<endl;
    }
   return;
}

int main(int argc, char** argv) {
int numRows = 3;
int numCol = 4;
float myArray[numRows][numCol];
    for(int i=0; i<numRows; i++){
        for(int j=0; j<numCol; j++) myArray[i][j]=(((float(rand())/RAND_MAX)*3)-1);
    }
printArray(myArray, numRows);
    return 0;
}

