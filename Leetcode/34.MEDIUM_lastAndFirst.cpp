34. Find First and Last Position of Element in Sorted Array


URL : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

CODE : 

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int i=0,j=nums.size()-1;
        bool f1=true,f2=true;
        while(i<=j)
        {
            if(nums[i]==target){f1=false;}
            if(nums[j]==target){f2=false;}
            if((f1==false && f2==false)){return {i,j};}
            else if(i==j){return {-1,-1};}            
            if(f1)i++;
            if(f2)j--;
        }
        return {-1,-1};
    }
};
