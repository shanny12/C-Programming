#include<stdio.h>

void main(){
    int a=0, b=1, sum, num;
    printf("enter the number of terms you want :");
    scanf("%d",&num);
    if(num==1)  printf("%d \n",a);
    else if (num==2)    printf("%d \n %d \n",a,b);
    else {
        for (int i=1; i<=num; i++){
            if (i==1) printf("%d \n",a);
            else if (i==2) printf("%d \n",b);
            else {
                sum = a + b;
                printf("%d \n",sum);
                a = b;
                b = sum;
            }

        }
    }
}