class Solution {
public:
bool wordPattern(string pattern, string str) {
        vector<string>ans;
        string temp="";
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ' && temp!="")
            {
                ans.push_back(temp);
                temp="";
            }
            else
            {
                temp+=str[i];
            }
        }
        if(temp!="")
            ans.push_back(temp);

        if(pattern.length()!=ans.size())
        {
            return false;
        }

        map<string,vector<int> > ms;
        map<char,vector<int> > mt;
         for(int i=0;i<ans.size();i++)
        {
            ms[ans[i]].push_back(i);
            mt[pattern[i]].push_back(i);
            
        }
        for(int i=0;i<ans.size();i++)
        {
            if(ms[ans[i]]!=mt[pattern[i]])return false;
        }
        return true;

    }
};
