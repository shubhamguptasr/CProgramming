#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q4 Students average as an input and outputs 1-4
    float avg;

    printf("Please input an average between 0-100: ");
    scanf("%f",&avg); //saves the input as float.

    //checks for the right if condition.
    if(avg>=90 && avg<=100){
        printf("4");
    }
    else if(avg>=80 && avg<=89){
        printf("3");
    }
    else if(avg>=70 && avg<=79){
        printf("2");
    }
    else if(avg>=60 && avg<=69){
        printf("1");
    }
    else if(avg>=0 && avg<=59){
        printf("0");
    }
    else
        printf("The input is invalid and not in range 0-100. Please try again! ");
    return 0;
}
