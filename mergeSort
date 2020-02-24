#include <iostream>
using namespace std;
void printArray(int arr[],int n){
	for(int i=0;i<n;++i)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void merge(int arr[], int left, int middle, int right){

	int i,j,k;
	int n1 = middle - left +1;
	int n2 = right - middle;
	//Creat temp arrays
	int l[n1],r[n2];
	for(i=0;i<n1;++i)
		l[i]=arr[left+i];
	for(j=0;j<n2;++j)
		r[j]=arr[middle+1+j];
	i=j=0;
	k=left;
	while(i<n1 && j<n2){
		if(l[i]<r[j]){
			arr[k]=l[i];
			++i;
		}
		else{
			arr[k]=r[j];
			++j;
		}
		++k;
	}
	while(i<n1){
		arr[k]=l[i];
		++i;
		++k;
	}
	while(j<n2){
		arr[k]=r[j];
		++j;
		++k;
	}
}
void mergeSort(int arr[], int left, int right){
	if(left>=right)
		return;
	int middle = (left+right)/2;
	mergeSort(arr,left,middle);
	mergeSort(arr,middle+1,right);
	merge(arr,left,middle,right);
}
int main(){
	int arr[]={4,6,7,2,3,5,1,9,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Array before sorting: "<<endl;
	printArray(arr,n);
	mergeSort(arr,0,n-1);
	cout<<"\nArray after sorting: "<<endl;
	printArray(arr,n);
	return 0;
}
