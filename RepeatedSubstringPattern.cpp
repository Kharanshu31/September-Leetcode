class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i = 1;i<=s.length()/2;i++)
        {
            string str = s.substr(0,i);
            
            if(s.length()%str.length() == 0) 
            {
                int temp = s.length()/str.length();
              
                string s1 = str;
                str = "";
                while(temp--)
                {
                    str += s1;
                }
            
                if(s == str)
                    return true;
            }
        }
        
        return false;
    }
};
