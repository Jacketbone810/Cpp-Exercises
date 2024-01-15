/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 22, 2018, 9:50 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int hits=0;
    float a,b,x;
    float c,y;
    for(int i=1;i<16; i++ ){
        a=float(rand())/RAND_MAX;
        b=2*a;
        x=b-1;
        c=float(rand())/RAND_MAX;
        y=c-0.5;
        if (0<x<1&-0.5<y<0.5){
            hits=++hits;
        }
    }
    int Area_red=float(hits)/16*2.0;
     return 0;
}

