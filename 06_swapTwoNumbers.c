#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    a = a+b;
    b = a - b;
    a = a - b;

    printf("Value of a and b : %d %d \n",a,b);
    return 0;
}