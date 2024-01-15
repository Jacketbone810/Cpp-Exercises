/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 23, 2018, 2:49 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char x,y;
    cin>>x;
    cin>>y;
     if((x!='t'&&x!='f')||(y!='t'&&y!='f')){
         cout<<"Invalid please input either t or f and try again"<<endl;
         cin>>x;
         cin>>y;
    }
    if((x=='t'&&y=='f')|(x=='f'&&y=='t')){
        cout<<"The exclusive or of those two inputs is true"<<endl;
    }
    if((x=='f'&&y=='f')|(x=='t'&&y=='t')){
        cout<<"The exclusive or of those two inputs is false"<<endl;
    }
    return 0;
    
}
//(x!=('t'|'f'))&(y!=('t'|'f')))
