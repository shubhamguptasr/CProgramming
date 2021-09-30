#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q5 Calculate the Value of Pi
    int nterm,i; //initializing for loop conditions
    int deno = 3;
    double sum = 4; //initializing denominator and sum

    printf("How many infinite series iterations would you like to do? ");
    scanf("%d",&nterm);

    for(i=0;i<nterm;i++){ //i<nterm to ensure if 0 is inputted the for loop fails and skips to print statement
        if(i%2==0){ //checking if the term is even
            sum = sum - (double)4/deno; //ensuring its double - double!
        }
        if(i%2==1){ //checking if the term is odd
            sum = sum + (double)4/deno; //ensuring its double + double
        }
        deno = deno+2; //incrementing the denominator
    }
    printf("The value of pi is %f ",sum);
    return 0;
}
