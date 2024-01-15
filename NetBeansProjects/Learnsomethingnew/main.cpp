/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on July 14, 2019, 11:54 PM
 */

#include <cstdlib>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    srand(time(NULL));
    string myArray [10] = {"physics", "astronomy", "genetics", "baking", "photography", "guitar", "psychology", "First thing that comes to your mind", "Logicians and logic", "random"};
    int y;
    cout<<"0 = physics" << endl;
    cout<<"1 = astronomy" << endl;
    cout<<"2 = genetics" << endl;
    cout<<"3 = baking" << endl;
    cout<<"4 = photography" << endl;
    cout<<"5 = guitar" << endl;
    cout<<"6 = psychology" << endl;
    cout<<"7 = First thing that comes to mind" << endl;
    cout<<"8 = Logicians and logic" << endl;
    cout<<"9 = Random" << endl;
    cout<<"Input what number you would like to learn about: ";
    cin>>y;
    if(y>9){
        cout<<"You cannot input a number more than 9, try again..."<<endl;
        cin>>y;
    }
    if(y<0){
        cout<<"You cannot input a number less than 0, try again..."<<endl;
        cin>>y;
    }
    if(y==9){
        int j = (rand() % 9);
        cout<<myArray[j];
    }
}
