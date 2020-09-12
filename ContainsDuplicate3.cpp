class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
       
        int n=nums.size();
        set<long>s;
        for(int i=0;i<n;i++)
        {
            long v=(long)nums[i];
            if(i>k)
                s.erase(nums[i-k-1]);
            
            auto it=s.lower_bound(v-t);
            if(it!=s.end() && *it-v<=t)
                return true;
            s.insert(v);
            
        }
        return false;
    }
};
