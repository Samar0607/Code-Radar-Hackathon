#include <stdio.h>

int incrementToPrimeDigits(int N){
    int temp=N,n=0,a,res=0,result=0;
    while(temp>0)
    {
        a=temp%10;
        a++;
        if (a>=8){
            a=2;
        }
        else{
        for (int i=2;i<a;i++){
                if (a%i==0){
                    a++;
                }
            }}
        res=res*10+a;
        temp=temp/10;
    }
    while (res>0){
        n=res%10;
        result=result*10+n;
        res/10;
    }

    return result;
}