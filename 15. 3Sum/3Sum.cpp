class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size()<3){
            return result;
        }
        sort(nums.begin(),nums.end());
        int l=0;
        int r=0;
        int sum=0;
        
        for(int i=0;i<nums.size()-2;){

            l=i+1;
            r=nums.size()-1;
            while(l<r){
                sum=nums[i]+nums[l]+nums[r];
                if(sum==0){
                    vector<int> newone={nums[i],nums[l],nums[r]};
                    result.push_back(newone);
                    do{l++;}while(l<r&&nums[l]==nums[l-1]);
                    do{r--;}while(l<r&&nums[r]==nums[r+1]);                    
                }else if(sum<0){
                    l++;
                }else{
                    r--;
                }
            }
            do{i++;}while(i<nums.size()-2&&nums[i-1]==nums[i]);//key!!
        }
        return result;
    }
};
