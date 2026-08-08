class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int n = height.size();
        int i = 0,j = n-1;
        while (i < j){
            int water = (j - i)*min(height[i],height[j]);
            res = max(res , water);
            if(height[i] == height[j]){
                int a = height[i]*height[j-1];
                int b = height[j]*height[i+1];
                if(a >= b) j--;
                else i++;
            }else if(height[i] < height[j]){
                i++;

            }else{
                j--;
            }
        }
        return res;
    }
};