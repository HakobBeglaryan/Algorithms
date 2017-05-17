#include<iostream> 
using namespace std;
int main() {
	int n, i, j, s=0, p=0, x[10001],l;
	for (i = 1; i <= 10000; i++) x[i] = 0;
	cin >> n; x[10000] = 1;
	for (i = 1; i <= n; i++){
		
		for (j = 10000; j >= 1; j--)
		{
			x[j] = x[j] * i ;
		
		}
		
		for(int j=10000;j>=1;j--)
		{
			p=x[j]/10;
			x[j]%=10;
			x[j-1]+=p;
		}
		p=0;
	}
    for (int i = 1; i <= 10000; i++)
		if (x[i] != 0) { l=i;break;}
	for (int j = l; j <= 10000; j++)
		cout << x[j];
}