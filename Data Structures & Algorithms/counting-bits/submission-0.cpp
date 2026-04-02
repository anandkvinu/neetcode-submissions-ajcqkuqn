class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> p;
        
        for(int i=0;i<=n;i++){
            int count =0;
            int temp = i;
            if(temp==0){
            p.push_back(temp);
            }
            else{
        while(temp){
            temp&=(temp-1);
            count++;


        }
        p.push_back(count);
        }
        }
        return p;
    }
};
