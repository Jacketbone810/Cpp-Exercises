/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on February 7, 2018, 9:56 AM
 */

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

float pvector(vector<vector<float>> a){
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++)  cout<<a[i][j];
        
    }
   return 0;
}


int main(int argc, char** argv) {
vector<vector<float>> a;
float b;
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++) {
            b=3.0*rand()/RAND_MAX-1;
            vector <float> vector1 {b,b};
            vector <float> vector2 {b,b};
            a.push_back(vector1);
            a.push_back(vector2);
            cout<<a[i][j]<<"    ";
            int k =pvector(a);
cout<<k<<"    ";
        }
        //cout<<endl;
        cout<<endl;
    }


 //printArray(myArray, numRows);
    return 0;
}
