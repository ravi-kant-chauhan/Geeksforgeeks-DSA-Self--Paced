int computingPower(int x, int n) {
    int ans = 1;
    while(n>0) {
        if(n%2 != 0) 
            ans = ans * x;
        x = x*x;
        n = n/2;
    }
    return ans;
}