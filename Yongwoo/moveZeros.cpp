#New vector solution
#Initialise a new vector
#First push_back all non-zero ints into the new vector
#Then push_back all zeros into the new vector
#Assign original vector as new vector

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return;
        vector<int> numscopy;
        for(int i = 0; i < n; i++){
            if (nums[i] != 0){
                numscopy.push_back(nums[i]);
            }
        }
        for (int i = 0; i < n; i++){
            if (nums[i] == 0){
                numscopy.push_back(nums[i]);
            }
        }
        for (int i = 0; i < n; i++){
            nums[i] = numscopy[i];
        }
    }
};


#Two-pointers solution
#Initialise l and r with no values
#Assign the index of the first zero in the vector to l and l+1 to r
#if r is a non-zero int, switch the values of l and r, assign l as r and increment r by 1
#else increment r by 1

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return;
        int l, r;
        for (int i = 0; i < n; i++){
            if (nums[i] == 0){
                l = i;
                r = l + 1;
            }
            for (r; r < n; ){
                if (nums[r] != 0){
                    int tmp = nums[r];
                    nums[r] = nums[l];
                    nums[l] = tmp;
                    l = r;
                    r++;
                }
                else{
                    r++;
                }
            }
        }
    }
};
