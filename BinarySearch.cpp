#include<iostream>
using namespace std;

bool BinarySearch(int a[], int n, int x){
	int left = 0, right = n - 1,mid=0;
	while (left <= right)
	{
		mid = (right + left) / 2;
		
		if (a[mid] == x)
			return true;
		else if (x > a[mid])
			left = mid + 1;
		else
			right = mid - 1;

	}

	return false;

}

int main(){
	int a[10] = { 1, 20, 3, 4, 5, 8, 6, 7, 15, 30 };


	cout << BinarySearch(a, 10, 5) << endl;
	cout << BinarySearch(a, 10, 150) << endl;
	cout << BinarySearch(a, 10, 7) << endl;
	cout << BinarySearch(a, 10, 30) << endl;
	return 0;
}