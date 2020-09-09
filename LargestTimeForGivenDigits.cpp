class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        string s;
        sort(A.begin(),A.end());
        for(int i=2359;i>=0;i--){
            if(i%100>59)
                continue;
            else{
                int num=i;
                int x1=num%10;
                num=num/10;
                int x2=num%10;
                num=num/10;
                int x3=num%10;
                num=num/10;
                int x4=num%10;
                vector<int> v={x1,x2,x3,x4};
                sort(v.begin(),v.end());
                if(v==A){
                    s.push_back('0'+x4);
                    s.push_back('0'+x3);
                    s.push_back(':');
                    s.push_back('0'+x2);
                    s.push_back('0'+x1);
                    return s;
                }
            }
        }
        return s;
    }
};
