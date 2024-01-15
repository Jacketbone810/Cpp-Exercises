/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 31, 2018, 9:39 AM
 */

#include <iostream>
#include<vector>

using namespace std;

/*
 * 
 */
int main() {
    vector <int> v1;  //v1 is an empty vector
    cout<<"The size of v1 is "<<v1.size()<<endl;
    for (int i=1;i<=100;i++)
        v1.push_back(i);
    for (int i=0;i<100;i++)
        cout<<v1[i]<<" ";
    cout<<endl<<"Now the size of v1 is  "<<v1.size()<<endl;
    return 0;
}

