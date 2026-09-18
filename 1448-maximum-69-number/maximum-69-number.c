int maximum69Number (int num) {
    for(int i=1000;i>=1;i/=10){
        int digit=(num/i)%10;
    
    if(digit==6){
        return num+3*i;
    }
    }
    return num;
}
