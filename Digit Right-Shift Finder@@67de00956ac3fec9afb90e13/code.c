#include <stdio.h>
int digitRightShifter(int num){
    int result,temp,count,n;
    n=num/10;
    temp=num%10;
    while (num>0){
        num/=10;
        count++;

    }
    result=temp*count+n;
    return result;

}