#include <iostream>
#include <limits.h>
#include <array>
using namespace std;
int main(){
	int max = INT_MAX;
	cout<<"enter number values of coins: "<<endl;
	int n;
	cin>>n;
	cout<<"enter the value of coin: "<<endl;
	int* arr = new int [n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	cout <<"Enter amount of money needed: "<<endl;
	int s;
	cin>>s;
	int* arrSum = new int[s+1];
	arrSum[0]=0;
	for(int i=1;i<s+1;++i){
		arrSum[i]=max;
	}
	for (int i=0;i<s+1;++i){
		for(int j=0;j<n;++j){
			if(arr[j]<=i && (arrSum[i-arr[j]]+1)<arrSum[i]){
				arrSum[i] = arrSum[i-arr[j]]+1;
			}
		}
	}
	cout<<"min["<<s<<"] is "<<arrSum[s]<<endl;
	return 0;
}
