#include <iostream>
#include <cctype>
using namespace std;
int main(){
	string str = "10S2D*3T";
	for(int i=0;i<str.length();i++){
		if(isdigit(str[i])){
			if(isdigit(str[i+1])){ //������ 10�ΰ�� 
				cout << 10 << endl;
				i++;
				continue; 
			}
			else{
				cout << str[i]-'0' << endl;
			}
			
		}
	}
}
