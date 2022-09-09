/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec; 
		unordered_map<int,int> map; 

		for(int i = 0; i < nums.size(); i++) 
		{
			if(map.find(target - nums[i]) != map.end())
			{
				vec.push_back(map[target-nums[i]]); // index number
				vec.push_back(i); // index number 
				return vec; 
			}
			map[nums[i]] = i; // we are putting value along with its index number 
		}
		return vec; 
    }
};
// @lc code=end

