void factorialRange(int start,int end){
    for (int i=start;i<=end;i++){
        int fact=1;
        if(start>end ||stat<0||end<0){
            printf("Invalid range");
        }
        if (i==0){
            printf("%d \n",fact);
        }
        else{
            for(int j=i;j>0;j--){
                fact*=j;
            }
            printf("%d \n",fact);
            
        }
    }
}