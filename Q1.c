#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q1 compute sum from 30 to 1000
    int i;
    int sum;
    sum = 0; // initialize sum

    //using for loop
    for(i=30;i<=1000;i++){
        if(i%4==0){ //checks if i is a multiple
            sum = sum + i;
        }
    }
    printf("The sum using for loop is %d\n", sum);

    /*//using a while loop
    i = 30;
    while(i<=1000){
        if(i%4==0){
            sum = sum + i;
        }
        i++;
    }
    printf("The sum using while loop is %d\n", sum);*/

    /*//using a do while loop
    i=30; //initialize starting point
    do{
        if(i%4==0){ //checks if i is a multiple
            sum = sum +i; //adds it if it is
        }
        i++; //else increments it by 1
    }while(i<=1000); //does all of the above as far as this is true
    printf("The sum using do while loop is %d\n", sum);*/
    return 0;
}
