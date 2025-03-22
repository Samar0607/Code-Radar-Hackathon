#include <stdio.h>

int trackScores(int arr[],int n,int result[]){
    int lowest=arr[0],highest=arr[0],lowcount=0,highcount=0;
    for(int i =0;i<n;i++){
        if (lowest>arr[i]){
            lowcount++;
            lowest=arr[i];
        }
        if (highest<arr[i]){
            highcount++;
            highest=arr[i];
        }
    }
    result[0]=highcount;
    result[1]=lowcount;

}
