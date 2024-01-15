/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on February 12, 2018, 10:01 AM
 */

#include <iostream>
#include <cmath>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float area=0;
    int a=0;
    int b=2;
    float N=20;
    float width=(b-a)/N;
    for(int i=0; i<N; i++){
       float trapezoidHt=(pow(i*width,2.0)+pow(width*i+width,2.0)*width/2.0);
       area=area+(width*trapezoidHt);   
    }
    cout<<area;
    return 0;
}

