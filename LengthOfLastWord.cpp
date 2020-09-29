class Solution {
public:
    int lengthOfLastWord(string s) {
        string temp="";
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                if(temp!="")
                    break;
            }
            else
            {
                temp+=s[i];
            }
        }
        if(temp=="")
            return 0;
        return temp.length();
    }
};
