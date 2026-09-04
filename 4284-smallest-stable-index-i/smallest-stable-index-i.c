int firstStableIndex(int* n, int ns, int k) {
    if(ns==1) return 0;

    for(int i=0;i<ns;i++){
        int g=INT_MIN,s=INT_MAX;
        for(int j=0;j<=i;j++){
            if(n[j]>g) g=n[j];
        }
        for(int a=i;a<ns;a++){
            if(n[a]<s) s=n[a]; 
        }
        int b=g-s;
        if(b<=k) return i;
    }
    return -1;    
}