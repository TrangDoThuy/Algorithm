#include <iostream>
using namespace std;
void printArray(int arr[],int n){
	for(int i=0;i<n;++i)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void heapify(int arr[], int n, int i ){
	// each node i has 2 children at 2i+1 and 2i+2
	int largest=i;
	int left = 2*i+1;
	int right = 2*i+2;
	if(left<n && arr[left]>arr[largest]){

		largest = left;
	}
	if(right<n && arr[right]>arr[largest]){

			largest = right;
	}
	if(largest != i){
		swap(arr[i],arr[largest]);
		heapify(arr,n,largest);
	}
}
void heapSort(int arr[],int n){
	for(int i=n/2-1;i>=0;--i){
		heapify(arr,n,i);
	}
	for(int i=n-1;i>=0;--i){
		swap(arr[0],arr[i]);
		heapify(arr,i,0);
	}

}
int main(){
	int arr[]={4,6,7,2,3,5,1,9,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Array before sorting: "<<endl;
	printArray(arr,n);
	heapSort(arr,n);
	cout<<"\nArray after sorting: "<<endl;
	printArray(arr,n);
	return 0;
}
