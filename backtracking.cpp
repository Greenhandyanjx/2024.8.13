#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<set>
#include<algorithm>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        set<int>s(nums.begin(), nums.end());
        return s.find(target) - s.begin();
    }
};
//class Solution {
//public:
//    void nextPermutation(vector<int>& nums) {
//        int flag = false;
//        for (int i = nums.size() - 1; i > 0; i--) {
//            if (nums[i - 1] < nums[i]) {
//                int index = i - 1;
//                for (int j = nums.size() - 1; j > index; j--) {
//                    if (nums[j] > nums[index]) {
//                        swap(nums[j], nums[index]);
//                        reverse(nums.begin() + index + 1, nums.end());
//                        flag = true;
//                        break;
//                    }
//                }
//                break;
//            }
//        }
//        if (!flag)
//            reverse(nums.begin(), nums.end());
//    }
//};
//class Solution {
//public:
//    vector<int>res;
//    void backtracking(int n, string& path) {
//        
//    }
//    vector<int> grayCode(int n) {
//
//    }
//};