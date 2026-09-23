int countOdds(int low, int high){
 //return (high+(high&1)-low+(low&1))>>1;}
 int count=0;
    for(int i=low;i<=high;i++){
        if(i%2==1)
            count++;
    }
    return count;

}