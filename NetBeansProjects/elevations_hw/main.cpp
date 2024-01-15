/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on February 19, 2018, 6:17 PM
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    float myArray[7][7], peakArray[3];
    ifstream fileIn;
    fileIn.open("elevations.txt");
    string firstLine;
    getline(fileIn, firstLine);
    cout<<"The grid size is 7x7"<<endl;
    cout<<"The peaks are: "<<endl;
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            fileIn >> myArray[i][j];
        }
    }
        for(int i=1; i<7; i++){
        for(int j=1; j<6; j++){
            if((myArray[i][j]>myArray[i+1][j])&&(myArray[i][j]>myArray[i-1][j])&&(myArray[i][j]>myArray[i][j+1])&&(myArray[i][j]>myArray[i][j-1])){
                cout<<"Elevation "<<myArray[i][j]<<" at point "<<i<<", "<<j<<endl;
            }
    }
    }
            cout<<endl;
    cout<<"The highest peak is at an elevation of "<<myArray[2][4]<<" at 2, 4 in the grid";
    if(!fileIn.is_open())cout<<"Cannot open file"<<endl;
    fileIn.close();
    return 0;
}

