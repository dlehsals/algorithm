#include <iostream>
#include <string>
#include <stdlib.h>
int arr[10001] = {0};
using namespace std;
int solution(int num){
	int sum = 0;
	while(num != 0){
		sum += (num % 10);
		num /= 10;
	}
	return sum;
}
int main(){
	for(int i=1;i<10001;i++){
		int a = solution(i);
		if(a <= 10000){
			arr[a] = 1;
		}
	}
	for(int i=1;i<10001;i++){
		if(arr[i] != 1){
			cout << i << endl;
		} 
	}
	return 0;
}
