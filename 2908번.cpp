#include <iostream>
#include <string>
#include <vector> 
using namespace std;

string a, b, tmp1="", tmp2="";
int num1, num2;

int main(){
	
	cin >> a >> b;
	for(int i=3;i>=0;i--){
		if(a[i] == ' ' || b[i] == ' ') continue;
		tmp1+= a[i];
		tmp2+= b[i];
	}
	num1 = stoi(tmp1);
	num2 = stoi(tmp2);
	cout << num1 << num2;
	return 0;
}
