#include <stdio.h>

int countGlovePairs(int gloves[],int n){
    int count;
    int arr[n];
    for(int i=0;i<n;i++){
        for (int j=1;j<n;j++){
        if (gloves[i]==gloves[j]){
            count++;
            i++;
            gloves[j]=0;
        }
        }

return count++;
}}