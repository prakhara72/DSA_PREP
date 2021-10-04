/* https://leetcode.com/problems/two-sum/ */

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(), c=0;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int ind=i;
            int k=(target-nums[i]);
            for(int j=0;j<n && j!=i;j++)
            {
                if(nums[j]==k)
                {
                    c=1;
                    v.push_back(ind);
                    v.push_back(j);
                    break;
                }
            }
            if(c==1)
                break;
        }
        return v;
    }
};
