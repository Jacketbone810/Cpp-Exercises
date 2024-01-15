/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on June 1, 2018, 6:51 PM
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
    int num_on_die, roll, count;
    srand(time(NULL));
    cout<<"What number die are you rolling? ";
    cin>>num_on_die;
    cout<<"How many times are you rolling the die? ";
    cin>>count;
    for (int i=0; i<count;i++){
    roll=rand() % num_on_die +1;
    cout<<roll;
    cout<<endl;
    }
    return 0;
}

