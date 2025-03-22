#include <stdio.h>
int digitRightShift(int num)
{
    int result,temp,count,n=0;
    n=num/10;
    temp=num%10;
    while (num>0){
        num/=10;
        count++;

    }
    count--;

    result=(temp*count)+n;

    return result;

}