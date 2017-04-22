#include<iostream>
using namespace std;

void Merge(int *arr, int p, int q, int r){
	int *arr1, *arr2,n1=q-p+1,n2=r-q;
	arr1 = new int[n1];
	arr2 = new int[n2];
	for (int i = 0; i < n1; ++i)arr1[i] = arr[p + i];
	for (int i = 0; i < n2; ++i)arr2[i] = arr[q + 1 + i];
	
	int i = 0, j = 0, k = 0;

	while (i < n1 && j < n2){
		if (arr1[i] >= arr2[j])
			arr[p + k] = arr2[j++];
		else
			arr[p + k] = arr1[i++];
		k++;
	}

	while (i < n1){
		arr[p + k] = arr1[i++];
		k++;
	}
	while (i < n2){
		arr[p + k] = arr2[j++];
		k++;
	}
}

void MergeSort(int *arr,int p,int r){
	if (p < r)
	{
		int q = (p + r) / 2;
		MergeSort(arr, p, q);
		MergeSort(arr, q + 1, r);
		Merge(arr, p, q, r);
	}
}


int main(){
	int ar[5] = { 1, 8, 4, 2, 10 };
	MergeSort(ar, 0, 4);
	for (int i = 0; i < 5; ++i)
		cout << ar[i] << ' ';

	return 0;
}