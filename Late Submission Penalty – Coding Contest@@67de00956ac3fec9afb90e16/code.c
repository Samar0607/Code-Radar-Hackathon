#include <stdio.h>

int calculatePenalty(int a ,int b,int c,int d,int e,int f){
    if (a<d||b<e||c<f){
        return 0;
    }
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