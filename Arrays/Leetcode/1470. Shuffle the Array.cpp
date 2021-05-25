class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> res; // O(N) == Space
        
        if(nums.size()==2) return nums;
        int i=0;
        while(n<nums.size()){   // O(N)
            res.push_back(nums[i]);
            res.push_back(nums[n]);
            i++;
            n++;
        }
        
        return res;
        
    }
};
