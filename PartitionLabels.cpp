class Solution {
public:
    vector<int> partitionLabels(string s)
    {
        int n=s.length();
        vector<int>h(26,-1);

        for(int i=0;i<n;i++)
        {
            h[s[i]-'a']=i;
        }

        int mxp=-1;
        int len=0;

        vector<int>res;

        for(int i=0;i<n;i++)
        {
            int cur=h[s[i]-'a'];

            mxp=max(mxp,cur);

            ++len;

            if(i==mxp)
            {
                res.push_back(len);
                //cout<<"l : "<<len<<"\n";
                mxp=-1;
                len=0;
            }
        }
        
        return res;
    }
};
