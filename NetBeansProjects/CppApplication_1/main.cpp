/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on February 14, 2018, 9:46 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */

char firstroll(){
    int die1=rand()%6+1;
    int die2=rand()%6+1;
    int sum=die1+die2;
    if(sum==7||sum==11){
        return 'w';
    }
    if(sum==2||sum==3||sum==12){
        return 'l';
    }
    else{
        return 'r';
    }
}

int main(int argc, char** argv) {
    int win = 0;
    int loss = 0;
    int reroll = 0;
    for(int i=1; i<=1000; i++){
        //simulate dice roll call firstroll
        char result=firstroll();
        if(result=='w'){
            win++;}
         if(result=='l'){
             loss++;}
         if(result=='r'){
             reroll++;}
    }
    float wins_per=0.1*win;
    float loss_per=0.1*loss;
    float re_per=0.1*reroll;
    cout<<"Percentage of wins is "<<wins_per<<endl;
     cout<<"Percentage of losses is "<<loss_per<<endl;
      cout<<"Percentage of re-rolls is "<<re_per;
    return 0;
}