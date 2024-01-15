/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jakecastellano
 *
 * Created on January 9, 2018, 4:24 PM
 */

/*
 Note anything between the characters above and below these lines is a comment
 and ignroed by the compiler
 */

/* 
 * File:   main.cpp
 * Author: MSF
 *
 * Created on December 29, 2017, 11:59 AM
 */

/*
 Note anything between the characters above and below these lines is a comment
 and ignroed by the compiler
 */

/* 
 * File:   main.cpp
 * Author: MSF
 *
 * Created on December 29, 2017, 11:59 AM
 */

#include <iostream> //include library needed for input and output
/* for a comment less than  one line you can use  dobule slashes and everything
 to the right of the double slash is ignored on that one line
 */
using namespace std; // allows access to library by other parts of your program

/*
 * 
 */
int main(int argc, char** argv) {  
    /*
     * note you may or may not have characters  in
     *  tge  parentheses, depending on your IDE,
     * for now you can ignore them
    */
    string name; // declares a variable of type string
    cout<< "What do you want to be called? "; 
    /*cout stands for console output (output to scree)
      anything inside double quotes is a string constant
     the <<is the output stream operator it sends what is on the right to 
      the stream or device on the left
    */
    cin >> name;
    /* cin is tihe input stream operator. It assigns what comes from the stream
      or device
       on the right of the operator to the variable on the right
     */
    cout<< "Hello "<< name<< endl;
    cout<< "You are now a programmer!";
    return 0;
}
