#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int JumpSearch(int*arr, int n, int x){
	int step = sqrt(n),prev=0;
	while (arr[min(step, n) - 1] < x){
		prev = step;
		step += sqrt(n);
		if (prev >= n)
			return -1;
	}
	while (arr[prev] < x){
		prev++;
		if (prev == min(n, step))
			return -1;

	}

	if (arr[prev] == x)
		return prev;

	return -1;
}

int main(){
   int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   cout << JumpSearch(arr, 10, 15);
	return 0;
}