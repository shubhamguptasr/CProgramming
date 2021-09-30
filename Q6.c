#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Q6 Pythagorean Triples
    int side1,side2,hyp;
    int count =1;

    printf("Number\t side1\t side2\t hypotenuse\t\n");

    for(hyp=0;hyp<=400;hyp++){ //loops only when hyp is less or equal to 400
        for(side2=0;side2<hyp;side2++){ //side2 needs to be smaller than hyp for loop to run
            for(side1=0;side1<=side2;side1++){ //checks if side1 is smaller or equal to side2
                    if(side1*side1 + side2*side2 == hyp*hyp){ //checks if the following condition is true
                        printf("%d\t %d\t %d\t %d\t\n",count,side1,side2,hyp);
                        count++;
                    }
            }
        }
    }
    return 0;
}
