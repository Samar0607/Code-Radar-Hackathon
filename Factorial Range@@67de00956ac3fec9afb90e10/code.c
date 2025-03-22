void factorialRange(int start,int end){
    for (int i=start;i<end;i++){
        int fact=1;
        if (i==0){
            printf("%d",fact);
        }
        else{
            for(int j=i;j>0;j--){
                fact*=j;
            }
            printf("%d \n",fact);
            
        }
    }
}