//Day 1
//Qusetion 4
//https://leetcode.com/problems/number-of-good-pairs/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count =0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
                else{
                    count+0;
                }
            }
        }
        return count;
    }
};

//Time Complexity -> O(n**2)
