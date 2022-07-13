#include<stdio.h>
void main(){
    int hours, rem;
    float basic_pay = 12.0, sum, extraAmount;
    printf("enter the no. of hours : ");
    scanf("%d",&hours);
    if(hours>40){
        rem = hours - 40;
        extraAmount = rem * (basic_pay*1.5);
        sum = extraAmount + 40*basic_pay;
    }
    else
        sum=hours*basic_pay;

    if (sum<300) sum = sum - sum*0.15;
    else if (sum>300 && sum<500) sum = sum - sum*0.20;
    else    sum = sum - sum*0.25;

    printf("Total earning for the week : %f",sum);
}