class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
        vector<int>R(nums.size()+1,0);
        R[0]=nums[0];
        R[1]=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++)
        {
            R[i]=R[i-1];
            for(int j=i-2;j>=0;j--)
            {
                R[i]=max(R[i],nums[i]+R[j]);
            }
        }
        
        return R[nums.size()-1];
    }
};
