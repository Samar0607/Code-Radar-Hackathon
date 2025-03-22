#include <stdio.h>
int digitRightShift(int num)
{
    int result=0,temp=0,count=1,n=0;
    n=num/10;
    temp=num%10;
    while (num>0){
        num=num/10;
        count=count*10;
    }
    count=count/10;
    result=(temp*count)+n;

    return result ;

}