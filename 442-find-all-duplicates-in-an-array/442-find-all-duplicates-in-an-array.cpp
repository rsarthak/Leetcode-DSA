class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int>res;
        for(auto it:m){
            if(it.second>1)
                res.push_back(it.first);
        }
        return res;
        }
};