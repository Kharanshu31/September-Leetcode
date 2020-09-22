class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        int mxsum=nums[0];
        int mnsum=nums[0];
        int mp=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
                swap(mxsum,mnsum);
            mxsum=max(nums[i],nums[i]*mxsum);
            mnsum=min(nums[i],nums[i]*mnsum);
            
            mp=max(mp,mxsum);
        }
        
        return mp;
    }
};
