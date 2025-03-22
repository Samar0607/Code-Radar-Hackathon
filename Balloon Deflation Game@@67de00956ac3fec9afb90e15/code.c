#include <stdio.h>

deflateBalloons(int array[],int n){
    printf("%d",n);
    int flag =1,least=air[0],count;
    while(flag){
        int temp[1000];
        for(int i=0;i<n;i++){
            if (least<air[i]&&air[0]>0){
                least=air[i];
            }      }
        for(int i=0;i<n;i++){
            if (air[i]-least>0){
                count++;
            }
            air[i]=air[i]-least;
        }
        printf("%d",count);
    }
}