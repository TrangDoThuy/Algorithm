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
	/*Bắt đầu từ trạng thái 0.
	 * Thử nhét đồng xu thứ 1 vào các tổng đã tính.
	 * Nếu như tổng t có số đồng xu ít hơn số đồng xu hiện tại thì tiến hành cập nhật.
	 *  Rồi tiếp tục thử với đồng thứ 2, 3 cho đến khi thử hết các đồng.  */
	for (int j=0;j<n;++j){
		for(int i=0;i<s+1;++i){
			if(i+arr[j]<=s && arrSum[i]+1<arrSum[i+arr[j]]){
				arrSum[i+arr[j]]=arrSum[i]+1;
			}
		}
	}
	/*
	 Với mỗi j, Vj≤i, tìm số đồng xu nhỏ nhất để tổng bằng i−Vj.
	  Giả sử nó bằng m.
	  Nếu m+1 nhỏ hơn số lượng đồng xu hiện tại cho tổng i thì ta cập nhập nó bằng m+1.*/
	/*
	for (int i=0;i<s+1;++i){
		for(int j=0;j<n;++j){
			if(arr[j]<=i && (arrSum[i-arr[j]]+1)<arrSum[i]){
				arrSum[i] = arrSum[i-arr[j]]+1;
			}
		}
	}
	 */
	for(int i=0;i<=s;++i)
		cout<<"min["<<i<<"] is "<<arrSum[i]<<endl;
	return 0;
}
