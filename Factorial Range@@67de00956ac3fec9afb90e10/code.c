#include <stdio.h>

void factorialRange(start,end){
    for (int i=start;i<end;i++){
        int fact=1;
        if (i==0){
            printf("%d",fact);
        }
        else{
            for(int j=i;j>0;j++){
                fact*=j;
            }
            printf("%d",fact);
        }
    }
    return 0;

}