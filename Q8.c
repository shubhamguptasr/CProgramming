#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*//Q8 write a program to print 7 digits backwards
    int num;
    int lastDigit;
    int reverse =0; //initializing the variables

    printf("Please enter a seven-digit positive integer: ");
    scanf("%d", &num);

    while (num !=0){
        lastDigit = num%10; //removes the last digit (remainder)
        num = num/10; //stores the preceeding  (quotient)
        reverse = reverse*10 + lastDigit; //multiplies by 10 to undo the division from before and adds the last digit
    }
    printf("The number in reverse order is %d", reverse);*/

    double a[15];
    int i;
    printf("Please input 15 floating point numbers: ");

    for(i=0;i<15;i++){
        scanf("%lf", &a[i]);
    }

    for(i=14;i>=0;i--){
        printf("%lf\n", a[i]);
    }

    return 0;
}
