#include <iostream>
using namespace std;
void printArray(int arr[],int n){
	for(int i=0;i<n;++i)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void swapt(int* a, int* b){
	int i = *a;
	*a=*b;
	*b=i;
}
int partition( int arr[],int low, int high){
	int pivot = arr[high];
	int i = low; // index of the element right before the pivot in sorted array
	for(int j=low; j<high;++j){
		if(arr[j]<pivot){

			swapt(&arr[i],&arr[j]);
			++i;
		}
		swapt(&arr[i],&arr[high]);
	}
	return i;
}
void quickSort(int arr[], int low, int high){
	if(low>=high)
		return;
	int pi = partition(arr, low,high);
	quickSort(arr, low,pi-1);
	quickSort(arr,pi+1,high);
}
int main(){
	int arr[]={4,6,7,2,3,5,1,9,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Array before sorting: "<<endl;
	printArray(arr,n);
	quickSort(arr,0,n-1);
	cout<<"\nArray after sorting: "<<endl;
	printArray(arr,n);
	return 0;
}
