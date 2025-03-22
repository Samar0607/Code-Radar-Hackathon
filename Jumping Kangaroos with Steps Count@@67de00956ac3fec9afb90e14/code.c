#include <stdio.h>

int kangaroo(a,b,c,d){
    if(a<c&&b<d){
        return -1;
    }
    for(int n=1;n<100;n++){
        if ((a+n*b)==(c+n*d)){
            return n;
        }
    }
    return -1;
}