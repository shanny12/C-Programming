#include<stdio.h>
void main()
{
    int range;
    printf("enter the range");
    scanf("%d",&range);
    for(int i=1;i<range;i++){
        if(i%3==0)
            printf("fizz\n");
        else if(i%5==0)
            printf("buzz\n");
        else if (i%15==0)
            printf("fizzbuzz\n");
        else    
            printf("%d\n",i);
    }

}