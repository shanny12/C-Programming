#include<stdio.h>
#include<stdlib.h>

void main(int argc, char *argv[])
{
    int range;
    range = atoi(argv[1]);
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