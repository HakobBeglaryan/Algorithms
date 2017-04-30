#include<iostream>
using namespace std;

int InterpolationSearch(int arr[], int n, int x){
	int left = 0, right = n - 1;
	while (left <= right && arr[left] <= x && arr[right] >= x){
		int midx = left + ((x - arr[left])*(right - left)) / (arr[right] - arr[left]);
		if (arr[midx] == x)
			return midx;
		if (arr[midx] < x)
		left = midx + 1;
		else
		right = midx - 1;
	}
	return -1;
}

int main(){
   int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   cout << InterpolationSearch(arr, 10, 0);
	return 0;
}