/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 17, 2018, 10:02 AM
 */

#include <iostream>
#include<string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string str;
    do{
        cout << "Enter text: ";
        getline (cin, str);
        cout << "You entered: " << str << '\n';
    } while(str != "goodbye");
    return 0;
}

