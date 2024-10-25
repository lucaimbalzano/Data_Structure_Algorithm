//
// Created by lucaimbalzano on 10/20/24.
//

#include "main.h"
#include <iostream>
#include <vector>
//#include <map>
#include <unordered_map>

using namespace std;

// What the system expect:
//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]
//Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

//Input: nums = [3,2,4], target = 6
//Output: [1,2]

//Input: nums = [3,3], target = 6
//Output: [0,1]


// First Solution
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        vector<int> result;
//        for(size_t i = 0; i < nums.size(); i ++){
//            for(size_t j = 0; j < nums.size(); j ++){
//                if ((nums[i] + nums[j] == target) && (i != j)) {
//                    std::cout << "INCYCLE: " << nums[i] << " - " << nums[j];
//                        result.push_back(i);
//                        result.push_back(j);
//                        return result;
//                }
//            }
//        }
//        return result;
//    }
//};

// Second Solution
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target){
            unordered_map<int, int> map;
            vector<int> res;
            for(size_t i=0; i < nums.size(); i++){
                if(map.find(nums[i]) == map.end())
                    map[nums[i]] = i;
                if(map.find(target - nums[i]) != map.end() && i != map[target - nums[i]]){
                    res.push_back(i);
                    res.push_back(map[target - nums[i]]);
                    break;
                }
            }
            return res;
        };
};

//int main () {
//    vector<int> nums;
//    nums.push_back(3);
//    nums.push_back(3);
////    nums.push_back(0);
//    int target = 6;
//    Solution solution;
//    vector<int> result = solution.twoSum(nums, target);
//    std::cout << "\n" << result[0] << " - " << result[1] << std::endl;
//    return 0;
//}