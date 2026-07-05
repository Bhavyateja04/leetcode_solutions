class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int check=purchaseAmount%10;
        if(check>=5) 
        purchaseAmount+=(10-check);
        else purchaseAmount-=check;
        return 100-purchaseAmount;
    }
};