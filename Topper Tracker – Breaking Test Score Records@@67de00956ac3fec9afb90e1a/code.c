#include <stdio.h>

int trackScores(int arr[],int n,int result[]){
    int highest,lowest,hh=0,lh=0;
    int st=scores[0];
    for(int i=1;i<n;i++){
        if (arr[i]>st){
            highest=arr[i];
        }
        if (arr[i]<lowest){
            lowest=arr[i];
        }
        if (highest>arr[i]){
            hh++;
        }
        if(lowest<arr[i]){
            lh++;
        }

}
result[0]=hh;
result[1]=lh;
return result;


}