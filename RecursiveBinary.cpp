#include<iostream>
using namespace std;

bool byn(int arr[], int n, int m, int x){
	if (n <= m){
		if (arr[(n + m) / 2] == x)
			return true;

		else if (arr[(n + m) / 2] > x)
			return byn(arr, n, ((n + m) / 2) - 1, x);
		else
			return byn(arr, ((n + m) / 2) + 1, m, x);
	}
	return false;
}
int main(){
	int a[8] = { 1,2,3,20,5,6,7,8 };
	cout << byn(a, 0, 7, 20);

}