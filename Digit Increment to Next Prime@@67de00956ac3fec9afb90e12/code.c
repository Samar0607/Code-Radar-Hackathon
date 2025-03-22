#include <stdio.h>

int incrementToPrimeDigits(int N){
    int temp=N,n=0,a;
    while(temp>0){
        a=temp%10;
        a++;
        if (a>=8){
            a=2;
        }
        else{
        flag1=1;
        while(flag){
            for (int i=2;i<a;i++){
                if (a%i==0){
                    a++;
                }
            }
        }}
        n=n+a*10;

    }
    return n;
}