#include<stdio.h>
void main()
{
    int num,count=0, i;
    printf("enter the number \n");
    scanf("%d",&num);

    // check whether the number is 0 or 1. Since 0 and 1 are not prime.
    if(num==0 || num==1 || num<0){
        printf("not prime");
    }

    // if number is greater than 1 then check for whether it is Prime Number or Not
    else {
        // check for the divisibilty in the range 2 to num-1
        for(int i=2; i<num; i++){
            //if number is divisible then increase the count
            if (num%i==0){
                count++;
                printf("not prime number");
                break;
            }
        }
        //if the count=0 then it is a Prime number
        if(count==0)
            printf("prime no");
        }
}