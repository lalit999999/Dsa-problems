class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int ,int > m;
        for (int i = 0 ; i < numbers.size() ; i++){
            m[numbers[i]] = i + 1;
        }
        vector<int> res = {};
        for (int i = 0 ; i < numbers.size() ; i++){
            int x = m[target - numbers[i]];
           if(x && (x != (i+1))){
            if(x < i+1) res = { x , i+1};
            else res = {  i+1 , x};
           }
        }
        return res;
    }
};