#include<iostream>
using namespace std;

bool isPrime(int num) {
	if (num <= 3) {
		return num > 1;
	}
	else if (num % 2 == 0 || num % 3 == 0) {
		return false;
	}
	else {
		for (int i = 5; i * i <= num; i += 6) {
			if (num % i == 0 || num % (i + 2) == 0) {
				return false;
			}
		}
		return true;
	}
}
int Dcount(int a){
	int count = 0;
	while (a){
		count++;
		a /= 10;
	}
	int i = 1, j = 0;
	while (j < count){
		i *= 10;
		++j;
	}
	return i;
}


int main(){

	int n;
	cin >> n;
	int arr[1000];
	arr[0] = 2;
	arr[1] = 3;
	for (int index = 2, j = 4; index < 1000; ++j){
		if (isPrime(j))
			arr[index++] = j++;
	}

	int arr1[500];
	for (int i = 0, j = 0; i < 1000; ++j){
		arr1[j] = arr[i++];
		arr1[j] = arr1[j] * Dcount(arr[i]) + arr[i++];
	}


	int prime[500];
	int index = 0;
	for (int i = 0; i < 500; ++i){
		if (isPrime(arr1[i]))
			prime[index++] = arr1[i];
	}

	cout << prime[n - 1] << ' ';

	return 0;
}