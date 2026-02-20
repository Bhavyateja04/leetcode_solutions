class Solution {
public:
    int fib(int n) {
        	if(n==0 || n==1){
		return n;
	}
	int sub1=fib(n-1);
	int sub2=fib(n-2);
	int current=sub1+sub2;
return current;
    }
};