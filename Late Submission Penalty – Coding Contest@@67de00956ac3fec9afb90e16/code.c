#include <stdio.h>

int calculatePenalty(int a ,int b,int c,int d,int e,int f){
    if (c<f){
        return 0;
    }
    if(a<0||b<0||c<0) return 0;
    if (c>f){
        return 5000; 
    }
    else{
        if (b>e){
            return 200*(b-e);
        }
        else{
            return 10*(a-d);
        }

    }
}