bool checkGoodInteger(int n) {
    int sqsum=0,sum=0;
    int dtsum;
    while(n>0){
        dtsum=n%10;
        sum+=dtsum;
        sqsum+=dtsum*dtsum;
        n=n/10;
    }
    return sqsum-sum>=50;
}