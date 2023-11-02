class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

//we are given an array of 0-index nums
// a target element is given as target 
// sort the array in increasing order 
//return the list of index of target elements in array
// return -1 if no target found