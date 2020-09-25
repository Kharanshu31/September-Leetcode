class Solution {
public:
    int target,mxindex;
    vector<vector<int>> ans;
    
    void combi(vector<int>&temp,int index,int currsum,int val)
    {
        if(index==mxindex)
        {
            if(currsum<target)
                return;
            
            ans.push_back(temp);
            return;
        }
        
        for(int i=val;i<=9;i++)
        {
            temp[index]=i;
            if(i+currsum>target)
                break;
            combi(temp,index+1,currsum+i,i+1);
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp(k,0);
        target=n;
        mxindex=k;
        combi(temp,0,0,1);
        return ans;
    }
};
