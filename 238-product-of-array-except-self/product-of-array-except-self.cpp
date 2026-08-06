class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1;
        int no_of_zero = 0;
        int zero_index = -1;
        vector<int> res(nums.size(), 0); 
        for(int i = 0; i< nums.size() ; i++){
            if(nums[i] == 0){
                no_of_zero++;
                zero_index = i;
            }else {
                total = total * nums[i];
            }
        }
        if(no_of_zero > 1) return res;
        if(no_of_zero == 1) {
            res[zero_index] = total;
            return res;
        }

        for (int i = 0 ;i < nums.size();i++){
            if(nums[i] != 0) res[i] = total / nums[i];

        }
        return res;
        
    }
};