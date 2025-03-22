int mountainPeak(int N)
{
    int num=N,count=0;
    while (num>0){
        num=num/10;
        count++;
    }
    if (count%2==0){
        return -1;
    }
    if(count<3){
        return -1;
    }
    else{
        count++;
        for(int i=1;i<count/2;i++){
            N=N/10;
        }
        return N%10;
    }
    
}