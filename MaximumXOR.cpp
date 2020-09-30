class Solution {
public:
    struct Trie{
        int val;
        Trie *nodes[2]={NULL};
    };
    int findMaximumXOR(vector<int>& nums) {
        Trie *root = new Trie();
        Trie *prev;
		
        for( int i = 0 ; i < nums.size() ; i++ ){
            prev = root;
			
            for( int j = 31 ; j >= 0 ; j--  ){
               int index = nums[i] & ( 1 << j);
               if( index != 0 )  index = 1;
               if( !prev->nodes[index] )  prev->nodes[index] = new Trie();
               prev = prev->nodes[index]; 
            }
            prev->val = nums[i];
        }
        int mx = 0;  
        for( int i = 0 ; i < nums.size() ; i++ ){
            prev = root;
            for( int j = 31 ; j >= 0 ; j--  ){
               int index = nums[i] & ( 1 << j);
			  
               if ( index != 0 ) index = 0;
               else index = 1; 
               if( prev -> nodes[index]) prev = prev->nodes[index];     
               else prev = prev->nodes[!index];                    
            }
            mx = max(mx,prev->val^nums[i]);
        }
        return mx;
    }
};
