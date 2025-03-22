#include <stdio.h>

int countGlovePairs(int arr[],int n){
    int count,z=34634;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
                arr[j]=++z;
                break;
            }
        }
    }

return count;
}