class Solution {
public:
    
    int overlap(vector<vector<int>>& A, vector<vector<int>>& B)
    {
        int ans=-1;
        int n=A.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int ct=0;
                for(int x=i;x<n;x++)
                {
                    for(int y=j;y<n;y++)
                    {
                        if(A[x][y]==1 && B[x-i][y-j]==1)
                            ++ct;
                    }
                }
                ans=max(ans,ct);
            }
        }
        
        return ans;
    }
    
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        return max(overlap(A,B),overlap(B,A));
    }
};
