// 169.Majority_Element

// URL : https://leetcode.com/problems/majority-element/

// CODE : 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Create a unordered_map as we want the key to be in the order they are encountered.
        unordered_map<int,int> major;
// Add the elements to the MAP and increment their value on every encounter.
        for(int &i:nums) major[i]++;
// Getting the n/2 value.
        int size=nums.size()/2;
// If value is greater than n/2 returning the KEY (number)
        for(auto x:major)
        {
            if(x.second>size){return x.first;}
        }

        // int n=nums.size()/2,ctr=0;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();++i)
        // {
        //     //  cout<<nums[i];
        //     int j=i+1;
        //     if(j<=nums.size()-1 && nums[i]==nums[j])
        //     {
        //         ctr++;
        //     }
        //     else if(nums[i]!=nums[j]&&j<=nums.size()-1)
        //     {
        //         ctr=0;
        //     }
        //     else if(i==nums.size()-1)
        //     {
        //         if(nums[i]==nums[i-1]) ctr++;
        //     }
        //     if(ctr>n) return nums[i];
        // }
        return -1;
    }
};
