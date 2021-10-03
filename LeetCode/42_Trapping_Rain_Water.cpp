// LeetCode Problem: https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<=2)
            return 0;
        
    int lasti=height.size()-1;
     int summ=0;
        int start=0;
        vector<int> l(lasti+1,-1);
        vector<int> r(lasti+1,-1);
        
        while(height[start]==0)
            start++;
        
        for(int i=start+1;i<lasti;i++)
        {
            int left=i-1;
            int right=i+1;
            
            while(left>=start)
            {
                if(height[left] > l[i] && height[left] > height[i])
                    l[i]=height[left];
                left-=1;
            }
            
            while(right<=lasti)
            {
                if(height[right] > r[i] && height[right] > height[i])
                    r[i]=height[right];
                right+=1;
                
            }
            
        }
        for(int i=0;i<=lasti;i++)
        {
            int minn=l[i];
            minn  = r[i] < minn ? r[i] : minn;
            minn = minn - height[i];
            //cout<<minn<<" ";
            if(minn > 0)
                summ += minn;
        }
        
        return summ;
    }
};
