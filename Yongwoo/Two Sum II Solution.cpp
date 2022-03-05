/*A two-pointer solution for Two Sum II
Initialise l and r. Return {l+1, r+1} if the values of the indices are equal
to target.
If sum is larger, decrement r. If sum is smaller, incerment l.*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0, r = n - 1;
        while (l < r){
            if (numbers[l] + numbers[r] == target){
                return {l+1, r+1};
            }
            else if (numbers[l] + numbers[r] > target){
                r--;
            }
            else{
                l++;
            }
        }
        return {};
    }
};

