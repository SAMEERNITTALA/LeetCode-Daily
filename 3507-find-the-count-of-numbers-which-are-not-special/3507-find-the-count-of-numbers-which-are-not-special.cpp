class Solution {
    bool prime[100100];
   void sieve(int n ){
    memset(prime, true, sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                    prime[j] = false;
            }
        }
    }

    }
public:
    int nonSpecialCount(int l, int r) {
        sieve(sqrt(r));
        int count = 0;
        for(int i=sqrt(l);i*i<=r;i++){
           
            if(prime[i]==true && (i*i)>=l && (i*i)<=r){
                
                count++;
            }
        }
        return r-l+1-count;
    }
};
