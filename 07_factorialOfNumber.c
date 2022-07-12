#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int num, res=1;
    num = atoi(argv[1]);
    while(num!=0){
        res *= num;
        num--;
    }
    printf("%d\n",res);
    return 0;
}