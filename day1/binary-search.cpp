/* Problem link - https://leetcode.com/problems/binary-search/description/ */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int start = 0;
        int end = size - 1;
        int mid = (start + end)/2;
        
        int output = -1;

        while(start <= end){
            if(nums[mid] == target){
                output = mid;
                break;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }

            mid = (start + end)/2;
        }
        
        return output;
    }
};
