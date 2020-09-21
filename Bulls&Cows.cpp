class Solution {
public:
    string getHint(string secret, string guess) {
        int bull=0;
        int cows=0;

        vector<int>h(10,0);
        for(int i=0;i<secret.length();i++)
        {
            if(secret[i]==guess[i])
            {
                bull++;
                guess[i]='#';
                //cout<<"match found at : "<<i<<"\n";
            }
            else
            {
                h[secret[i]-'0']++;
            }
        }

        for(int i=0;i<guess.length();i++)
        {
            if(guess[i]!='#' && h[guess[i]-'0']>0)
            {
                //cout<<" match founhd for "<<guess[i]<<"  and the val of h is : "<<h[guess[i]-'0']<<"\n";
                cows++;
                h[guess[i]-'0']--;
            }
        }

        string ans="";
        ans+=to_string(bull);
        ans+='A';
        ans+=to_string(cows);
        ans+='B';

        return ans;
    }
};
