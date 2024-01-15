/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 12, 2018, 6:03 PM
 */
#include<iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float probability;
    float probability2;
    float probability3;
    float probability4;
    float probability5;
    float probability6;
    cout<<"What are the probabilities?"<<endl;
    cin>>probability;
    cin>>probability2;
    cin>>probability3;
    cin>>probability4;
    cin>>probability5;
    cin>>probability6;
    float surprise=-log(probability)/log(2);
    float surprise2=-log(probability2)/log(2);
    float surprise3=-log(probability3)/log(2);
    float surprise4=-log(probability4)/log(2);
    float surprise5=-log(probability5)/log(2);
    float surprise6=-log(probability6)/log(2);
    cout<<"The surprise for "<<probability<< " is "<<surprise<<endl;
    cout<<"The surprise for "<<probability2<< " is "<<surprise2<<endl;
    cout<<"The surprise for "<<probability3<< " is "<<surprise3<<endl;
    cout<<"The surprise for "<<probability4<< " is "<<surprise4<<endl;
    cout<<"The surprise for "<<probability5<< " is "<<surprise5<<endl;
    cout<<"The surprise for "<<probability6<< " is "<<surprise6<<endl;
    return 0;
}

