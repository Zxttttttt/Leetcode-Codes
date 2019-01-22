class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> permuteUnique(vector<int>& nums)  {
        if(nums.size()==0){
            return result;
        }
        sort(nums.begin(),nums.end());//排序
        vector<int> temp;
        func(nums,temp);
        return result;
    }
    void func(vector<int>& nums,vector<int> temp){
        if(nums.size()==1){
            temp.push_back(nums[0]);
            result.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(i!=0&&nums[i]==nums[i-1]){//跳过重复
                continue;
            }
            int tmp=nums[i];
            nums.erase(nums.begin()+i);
            temp.push_back(tmp);
            func(nums,temp);
            nums.insert(nums.begin()+i,tmp);
            temp.pop_back();
        }
    }
};
