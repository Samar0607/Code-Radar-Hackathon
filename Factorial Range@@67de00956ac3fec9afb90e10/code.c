void factorialRange(int start,int end){
    if (start>end){
        printf("Invalid range")
    }
    else{
    for (int i=start;i<=end;i++){
        int fact=1;
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
}}