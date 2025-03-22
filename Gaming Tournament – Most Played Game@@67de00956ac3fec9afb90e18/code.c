#include <stdio.h>

int mostPlayedGame (int arr[],int n){
    int most=0,count=0;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++){
            c++;
        }
    
    if(count < c)
    {
        count=c;
        most=arr[i];
    }
    return most;

}}