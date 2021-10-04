/* Given an array of digit strings nums and a digit string target, return the number of pairs of indices (i, j) (where i != j) such 
that the concatenation of nums[i] + nums[j] equals target.*/

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n = nums.size(), res = 0;
        for(int i = 0; i<n;i++)
        {
            for(int j = 0; j<n;j++)
            {
                string s = nums[i]+nums[j];
                if(s == target && j!=i)
                {
                    res++;
                }
            }
        }
        return res;
    }
};
