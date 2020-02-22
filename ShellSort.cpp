#include <iostream>
using namespace std;
void shellSort(int arr[], int n){
	for(int gap=n/2;gap>=1;gap/=2){
		for(int i=gap;i<n;++i){
			int temp = arr[i];
			int j;
			for(j=i;j>=gap && arr[j-gap]>temp;j-=gap){
					arr[j]=arr[j-gap];
			}
			arr[j]=temp;
		}
	}

}
void printArray(int arr[],int n){
	for(int i=0;i<n;++i)
		cout<<arr[i]<<" ";
}

int main(){
	int arr[]={4,6,7,2,3,5,1,9,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Array before sorting: "<<endl;
	printArray(arr,n);
	shellSort(arr,n);
	cout<<"\nArray after sorting: "<<endl;
	printArray(arr,n);
	return 0;
}
