#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q7 Perfect Number
    int i, j, num, sum;

    printf("Please enter a perfect number: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){ //from 1 to number entered
        sum = 0;
    for(j=1;j<i;j++){
        if(i%j==0){
            sum = sum +j;
        }
    }
    if(sum==i){
        printf("The perfect numbers are %d\n",i);
    }
}
return 0;
}

