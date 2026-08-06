class Solution {
public:
    int pro_of_digits(int number){
        int res = 1;
        int num = number;
        while(num > 0){
            int digit = num % 10;
            res = res * digit;
            num = num /10;
        }
        return res;
    }

    int res = -1;
    int smallestNumber(int n, int t) {
        for (int i = n ; i <= 100;i++){
            int pro = pro_of_digits(i);
            if(pro % t == 0){
                res = i;
                break;
            }
        }
    return res;
    }
};