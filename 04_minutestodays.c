#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[]){
    int min;
    min = atoi(argv[1]);
    printf("no of days : %d \n",min/(24*60));
    printf("no of years : %d \n",min/(24*60*365));
}