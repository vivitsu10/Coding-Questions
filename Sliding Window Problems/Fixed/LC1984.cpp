/* Minimum Difference Between Highest and Lowest of K Scores
Q. You are given a 0-indexed integer array nums, where nums[i] represents the score of the ith student. You are also given an integer k.
   Pick the scores of any k students from the array so that the difference between the highest and the lowest of the k scores is minimized.
   Return the minimum possible difference.
=> Whenever we are asked the difference between highest and lowest of k scores in an array, We can sort the array to find out the answer. In this question 
   we'll first sort the array and find the difference between maximum and minimum by keeping the window size of k. 
   After sorting this question becomes Fixed Sliding Window Problem  */

// T(n) - O(n)

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        int i=0,j=0,n=nums.size();
        while(j<n)
        {
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                mini=min(mini,nums[j]-nums[i]);
                i++;
                j++;
            }
        }
        return mini;
    }
};

//Brute Force
//T(n) - O(n*n) Finding difference between every i and j and store the minimum element
