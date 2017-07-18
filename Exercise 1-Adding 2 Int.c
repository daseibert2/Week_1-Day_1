#include <stdio.h>

int main() {                     //program entry point
    int integer1;                //names integer
    int integer2;
    int sum;
    
    /*printf("Hello world!\n");*/    //says what is between ""
    
    scanf("%d", &integer1);
    scanf("%d", &integer2);
    
    sum=integer1+integer2;
    
    
    printf("The sum of %d and %d is %d \n", integer1, integer2, sum); //after comma tells what to put in %d slots
    
    return 0;                   // Terminate main()
}                               // End of main

