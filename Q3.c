#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q3 checks if the integer entered is 5 digits
    int integer;

    do{
        printf("Please input a five digit integer (0 to end): "); //user input
        scanf("%d",&integer); //saves into integer
        if((integer>=-99999 && integer <= -10000) || (integer>=10000 && integer<=99999)){ //checks range +-99999 to +-100000
            printf("Your input is a five-digit number %d \n", integer);
        }
    }while(integer !=0); //checks if the inputted value is not 0
    printf("Thank you for using the program!");
    return 0;
}
