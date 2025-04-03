class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> s(nums.begin(),nums.end());
        int longest=0;
        for(auto num:s)
        {
            if(!s.count(num-1))
            {
                int currentnum=num;
                int currentstreak=1;
            
            while(s.count(currentnum+1))
            {
                currentnum++;
                currentstreak++;
            }
            longest=max(longest,currentstreak);
            }
        }
        return longest;
    }
};
