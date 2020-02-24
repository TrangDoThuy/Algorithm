#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define RANGE 255
void countingSort(char arr[]){
	char output[strlen(arr)];
	int count[RANGE];
	memset(count,0,sizeof(count));
	//store count of each character
	for(int i=0;arr[i];++i)
		++count[arr[i]];
	//change count[i] to its position in output array
	for(int i=1;i<RANGE;++i)
		count[i]+=count[i-1];
	//build the output character array
	for(int i=0;arr[i];++i){
		output[count[arr[i]]-1]=arr[i];
		--count[arr[i]];
	}
	// copy the output array to arr
	// so that arr now contains sorted characters
	for(int i=0;arr[i];++i)
		arr[i]=output[i];

}
int main(){
	char arr[]="countingSort";
	countingSort(arr);
	cout<<"Sorted character array is "<<arr;
	return 0;
}
