class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {//双指针
        sort(nums.begin(),nums.end());
        int result=nums[0]+nums[1]+nums[2];
        int l,r;
        l=r=0;
        int sum=0;
    
        for(int i=0;i<nums.size()-2;i++){
            l=i+1;
            r=nums.size()-1;
            while(l<r){
                sum=nums[i]+nums[l]+nums[r];
                if(abs(sum-target)<abs(result-target)){
                    result=sum;
                }
                if(sum>target){
                    r--;
                }else if(sum<target){
                    l++;
                }else{//sum==target
                    return target;
                }
            }
        }
        return result;
    }
};
