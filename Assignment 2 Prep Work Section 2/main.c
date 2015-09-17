//
//  main.c
//  Assignment 2 Prep Work Section 2
//
//  Created by Adam Goldberg on 2015-09-14.
//  Copyright (c) 2015 Adam Goldberg. All rights reserved.
//

#include <stdio.h>


void number_list (int n, int f, int b) {
    for (int x = 1; x <= n; x++) {
        if ((x % f == 0) && (x % b == 0)) {
            printf ("FuzzBizz\n");
        } else if (x % f == 0) {
            printf ("Fuzz\n");
        } else if (x % b == 0)
            printf ("Bizz\n");
        else
            printf ("%d\n", x);
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    

    // User can type in a number below to set the value of "Nezz"
    int n = 50;
    // User can type in a number below to set the value of "Fuzz"
    int f = 5;
    // User can type in a number below to set the value of "Bizz"
    int b = 12;
    
    number_list(n, f, b);
        
    
    return 0;
}



    //Write a program that takes three integer inputs: "Fuzz", "Bizz", and "Nezz".
    
    // Print numbers from 1 to the user's input for "Nezz". For the multiples of "Fuzz", print "Fuzz" instead of the number and for the multiples of "Bizz", print "Bizz" instead of the number. For numbers which are multiples of both "Fuzz" and "Bizz" print "FuzzBizz"
    
    //Once done, push the code to Github and email ios-prep@lighthouselabs.ca the link.
    
    //Yay! You are ready to learn Objective-C and start building your own apps.
    
    
