#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q2 prints the smallest number
    int num,UpperB;// define variables
    int i;
    int min; //setting the min for the first if run

    printf("Enter the number of integers: "); //user inputs the upperlimit
    scanf("%d", &UpperB);

    for (i = 1; i <= UpperB; i++){ //starts at i = 1 to Upperlimit
        do{
        printf("Please enter a positive number for %d: ", i);
        scanf("%d", &num);
        }while(num<0); //checks if number is smaller than 0 (negative) if yes does the do loop again

        if(i==1){
            min = num;
        }
        else if (num < min) // checks if num is smaller than the current min
            min = num;
    }
    printf("Minimum number is %d\n", min);
    return 0;
}
