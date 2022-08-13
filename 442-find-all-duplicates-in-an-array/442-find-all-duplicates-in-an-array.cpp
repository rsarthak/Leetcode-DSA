class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      vector<int>ans;
        for(int i=0;i<nums.size();i++){
          int r=abs(nums[i])-1;
          nums[r]=-nums[r];
          if(nums[r]>0)
              ans.push_back(r+1);
      }return ans;
        }
};