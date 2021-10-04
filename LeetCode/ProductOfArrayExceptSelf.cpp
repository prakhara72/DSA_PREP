/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]
*/

/*
Time Complexity : O(n)
Space Complexiy : O(n)
*/
vector<int> productExceptSelf(vector<int>& nums) 
{
        int n = nums.size();
        vector<int> ans(n,0);
        int temp = 1;
        for(int i = 0;i<n;i++)
        {
            ans[i] = temp;
            temp*= nums[i];
        }
        temp = nums[n-1];
        for(int i = n-2;i>=0;i--)
        {
            ans[i]*=temp;
            temp*=nums[i];
        }
        return ans;
}
