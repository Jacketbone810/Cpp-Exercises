/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on February 15, 2018, 9:26 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double a, b, answer;
    char c;
    cout<<"What is your first number? ";
            cin>>a;
    cout<<"You entered a "<<a<<endl;
    cout<<"What is your second number? ";
            cin>>b;
    cout<<"You entered a "<<b;
    cout<<endl;
    cout<<"What operation do you want to use? (use either *,/,+, or -): ";
            cin>>c;
    if(c=='*'||c=='/'||c=='+'||c=='-'){
        cout<<"You entered "<<c;
        cout<<endl; 
        if(c=='*'){
            cout<<"The product is: "<<a*b;
        }
        if(c=='/'){
            cout<<"The quotient is: "<<a/b;
        }
        if(c=='+'){
            cout<<"The sum is: "<<a+b;
        }
        if(c=='-'){
            cout<<"The difference is: "<<a-b;
        }
    }
    else{
        cout<<"Error! You did not enter a correct operator!";
        return 1;
    }
    return 0;
}

