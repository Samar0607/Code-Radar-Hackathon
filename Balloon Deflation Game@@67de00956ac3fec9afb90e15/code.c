#include <stdio.h>

 void deflateBalloons(int arr[],int n){
    printf("%d",n);
    int flag =1,least=arr[0],count;
    while(flag){
        int temp[100];
        for(int i=0;i<n;i++){
            if (least<arr[i]&&arr[0]>0){
                least=arr[i];
            }      }
        for(int i=0;i<n;i++){
            if (arr[i]-least>0){
                count++;
            }
            arr[i]=arr[i]-least;
        }
        printf("%d",count);
    }
}