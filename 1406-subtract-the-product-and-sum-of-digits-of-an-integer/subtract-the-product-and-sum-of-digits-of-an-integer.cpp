class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem=1,sum=0;
        while(n!=0){
            int digit=n%10;
            sum+=digit;
             rem=rem*digit;
             n=n/10;
        }
        return rem-sum;
    }
};