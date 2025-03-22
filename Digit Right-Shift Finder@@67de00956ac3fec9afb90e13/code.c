#include <stdio.h>
int digitRightShift(int num)
{
    int result=0,temp=0,count=0,n=0;
    n=num/10;
    temp=num%10;
    while (num>0){
        num=num/10;
        count++;

    }
    count--;

    result=(temp*count)+n;

    return n;

}