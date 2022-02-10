#include <iostream>
using namespace std;
int dp[40]={0};
int zero=0, one=0;
int fibonacci(int n){
	if(n == 0){
		dp[0] = n;
		return 0;
	}
	else if(n == 1){
		dp[1] = n;
		return 1;
	}
	if(dp[n] != 0)
		return dp[n];
	if(n >= 2){
		return dp[n] = fibonacci(n-2) + fibonacci(n-1);	
	}
}
int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int n;
		cin >> n;
		if(n == 0)
			cout << "1 0" << "\n";
		else if(n == 1)
			cout << "0 1" << "\n";
		else{
			fibonacci(n);
			cout << dp[n-1] << " " << dp[n] << "\n";
		}
	}
	return 0;
}
