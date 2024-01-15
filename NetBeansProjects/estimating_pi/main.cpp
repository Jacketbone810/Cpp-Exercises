/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 30, 2018, 4:24 PM
 */

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
    float x,y,a,c,r,PiTen,PiHun,PiTho, PiTenTho, PiHunTho;

    int hits;

    for(int i=0; i<10; i++){
     a=float(rand())/RAND_MAX;
        a=2*a;
        x=a-1;
        c=float(rand())/RAND_MAX;
        c=2*c;
        y=c-1;
        r=(x*x)+(y*y);
        if(r<=1){
            hits++;
        }
    }
        PiTen=4*float(hits)/10;
    float Error1=M_PI-PiTen;
hits = 0;

    for(int i=0; i<100; i++){
     a=float(rand())/RAND_MAX;
        a=2*a;
        x=a-1;
        c=float(rand())/RAND_MAX;
        c=2*c;
        y=c-1;
        r=(x*x)+(y*y);
        if(r<=1){
            hits++;
        }
    }
        PiHun=4*float(hits)/100;
    float Error2=M_PI-PiHun;
hits = 0;

    for(int i=0; i<1000; i++){
     a=float(rand())/RAND_MAX;
        a=2*a;
        x=a-1;
        c=float(rand())/RAND_MAX;
        c=2*c;
        y=c-1;
        r=(x*x)+(y*y);
        if(r<=1){
            hits++;
        }
    }
 PiTho=4*float(hits)/1000;
    float Error3=M_PI-PiTho;
hits = 0;

    for(int i=0; i<10000; i++){
     a=float(rand())/RAND_MAX;
        a=2*a;
        x=a-1;
        c=float(rand())/RAND_MAX;
        c=2*c;
        y=c-1;
        r=(x*x)+(y*y);
        if(r<=1){
            hits++;
        }
    }
        PiTenTho=4*float(hits)/10000;
    float Error4=M_PI-PiTenTho;
hits = 0;

    for(int i=0; i<100000; i++){
     a=float(rand())/RAND_MAX;
        a=2*a;
        x=a-1;
        c=float(rand())/RAND_MAX;
        c=2*c;
        y=c-1;
        r=(x*x)+(y*y);
        if(r<=1){
            hits++;
        }
    }
        PiHunTho=4*float(hits)/100000;
    float Error5=M_PI-PiHunTho;

 cout<<"No. of samples   |   "<<"Estimate of pi   |   "<<"Error"<<endl;
      cout<<"10"<<"                  "<<PiTen<<"             "<<Error1<<endl;
      cout<<"100"<<"                 "<<PiHun<<"                "<<Error2<<endl;
      cout<<"1000"<<"                "<<PiTho<<"               "<<Error3<<endl;
      cout<<"10000"<<"               "<<PiTenTho<<"               "<<Error4<<endl;
      cout<<"100000"<<"              "<<PiHunTho<<"             "<<Error5<<endl;
 return 0;
    }
   







