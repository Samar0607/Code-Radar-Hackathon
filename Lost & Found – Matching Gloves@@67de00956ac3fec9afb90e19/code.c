#include <stdio.h>

int countGlovePairs(int gloves[],int n){
    int count;
    int arr[n];
    for(int i=0;i<n;i++){
        for (int j=1;j<n;j++){
        if (gloves[i]==gloves[j]){
            if (gloves[i]<=0&&gloves[j]<=0)
            count++;
            i++;
            gloves[j]=-1;
        }
        }

return count;
}}