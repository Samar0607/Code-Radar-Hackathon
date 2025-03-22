#include <stdio.h>

int countGlovePairs(int gloves[],int n){
    int count;
    int arr[n];
    for(int i=0;i<n;i++){
        for (int j=1;j<n;j++){
        if(gloves[i]!=0&&gloves[j]!=0)
        {
        if (gloves[i]==gloves[j]){
            count++;
            gloves[j]=0;
        }
    }}}

return count;
}