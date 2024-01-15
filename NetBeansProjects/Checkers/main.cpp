/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on February 12, 2018, 11:18 PM
 */

#include <iostream>

using namespace std;

void setupBoard(char tempArray[][8], int num_rows);

int main(int argc, char** argv) {
    int num_rows=8;
    const int num_col=8;
    char myArray[num_rows][num_col];
    int i=0;
    int j=0;
    for(i=0; i<num_rows; i++){
        for(j=0; j<num_col; j++){
            if(((i%2==0)&&(j%2==0))||(i==j)||((j==i+2)||((j==i+4)||((j==i+6))))||((i==j+2)||((i==j+4)||((i==j+6))))||((i==9)&&(j==1))){
                    myArray[i][j]='1';   
            }
            else{
                myArray[i][j]='0';
            }
                //cout<<myArray[i][j]<<"  ";         
        }
        cout<<endl;
    }
    setupBoard(myArray, num_rows);
    return 0;
}

void setupBoard(char tempArray[][8], int num_rows){
    for(int i=0; i<num_rows; i++){
        for(int j=0; j<8; j++){
            if(((i==0||i==1||i==2)&&tempArray[i][j]=='1')){
                tempArray[i][j]='a'; 
            }
                else if((i==5||i==6||i==7)&&tempArray[i][j]=='1'){
                tempArray[i][j]='b';   
                }
            cout<<tempArray[i][j]<<"  ";
            }
        cout<<endl;
        }

    }


