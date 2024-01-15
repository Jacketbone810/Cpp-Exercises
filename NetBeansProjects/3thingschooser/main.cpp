/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on February 22, 2018, 10:17 PM
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

string pokemonChooser();

int main(int argc, char** argv) {
    cout<<pokemonChooser();
    return 0;
}

string pokemonChooser(){
    srand(time(NULL));
    string treeko="treeko";
    string torchic="torchic";
    string mudkip="mudkip";
    float x=rand()/RAND_MAX;
    if(x<=.33){
        return treeko;
    }
    else if(x<=.66&&x>.33){
        return torchic;
    }
    else
        return mudkip;
}