/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on February 1, 2018, 9:48 AM
 */

#include <iostream>
#include <vector>
using namespace std;
int addflips( vector <short> &,int);
void printflips(vector<short>);

int main() {
    vector <short> coinflip;
    cout<<"coinflip size = "<<coinflip.size()<<endl;
    cout<<" Entering addflips \n";
    int nheads=addflips(coinflip,3);
    cout<< "returning from addflips number of heads = "<<nheads<<endl;
    cout<<"conflip size = "<<coinflip.size()<<endl;
    printflips(coinflip);
    cout<<"returning from printflips coinflip size=  "<<coinflip.size();

    return 0;
}

int addflips( vector <short> &vecin,int nflips){
    int heads=0;
    for (int i=1;i<=nflips;i++){
        vecin.push_back(rand()%2);
        if (vecin[i-1]==1) ++heads; 
    }
    return heads;
}
void printflips(vector<short>vecout){
    int size=vecout.size();
    cout<<"entering printflips. Sizeof vecout= " <<size<<endl;
    for (int i=0;i<size;i++){
        cout<<vecout[i]<<endl;
        vecout.pop_back();
    }
   cout<<"leaving printflips. Sizeof vecout= " <<vecout.size()<<endl; 
}

