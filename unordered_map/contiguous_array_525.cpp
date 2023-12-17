class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int pf=0;
        int longest_subarray = 0;
        for(int i =0;i<nums.size();i++){
            pf+= nums[i]==0?-1:1;
            if(pf==0){
                longest_subarray = i+1;
            }
            else if(mp.find(pf)!=mp.end()){
                int now = i - mp[pf];
                longest_subarray = max(longest_subarray,now);
            }else{
                mp[pf] = i;
            }

        }
        return longest_subarray;
    }
};