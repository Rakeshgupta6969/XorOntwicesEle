class Solution {
    public:
        int duplicateNumbersXOR(vector<int>& nums) {
           // using the brute force solution.
          // using the hashmap.
    
          unordered_map<int,int> mp;
    
          for(int i = 0; i<nums.size(); i++){
           mp[nums[i]]++;
          }
    
    
          int ans = 0;
    
          for(auto i:mp){
         
            if(i.second == 2){
                ans  ^= i.first;
            }
    
    
          }
    
    
    
    
    
         return ans;
    
        }
    };