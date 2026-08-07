class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        map<int, int> mpp;
        for(int i = 0 ; i<n ; i++){
            int num = numbers[i];
            int needed = target - num;
            if(mpp.find(needed) != mpp.end()){
                return{mpp[needed]+1, i+1};
            }
            mpp[num] = i;
        }
        return{-1,-1};
    }
};