class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        map<int,int> m;
        for(auto it:digits) m[it]++;
        vector<int> ans;
        for(int i=1;i<=9;i++){
            for(int j=0;j<=9;j++){
                for(int k=0;k<=8;k+=2){
                    if(m[i]>0){
                        m[i]--;
                        if(m[j]>0){
                            m[j]--;
                            if(m[k]>0){
                                ans.push_back(i*100+j*10+k);
                            }
                            m[j]++;
                        }
                        m[i]++;
                    }
                }
            }
        }
        return ans;
    }
};