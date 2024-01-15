/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 10, 2018, 9:54 AM
 */

#include<iostream>
#include<climits>
using namespace std;
/*SHowing that C++ does not do bounds checking*/
int main(int argc, char** argv){
    short s_mp1;
    cout<<"max signed short = "<<SHRT_MAX<<endl;
    cout<<"max signed short + 1 = "<<(SHRT_MAX+1)<<endl;
    s_mp1=SHRT_MAX+1;
    cout<<"s_mp1 = "<<s_mp1;
    return 0;
}



