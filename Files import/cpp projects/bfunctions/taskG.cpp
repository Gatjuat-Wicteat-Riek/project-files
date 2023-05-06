#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int n, c, b;
    int a[1012];
	double mn = 1e6;
	cin >> n >> c;

	for (int i = 1; i <= c; i++)
		cin >> a[i];
	for (int i = 1; i <= c; i++)
		for (int j = i + 1; j <= c; j++)
			if (a[i] > a[j]) {
				b = a[i];
				a[i] = a[j];
				a[j] = b;
		}
	for (int i = 1; c - i < n, n <= c; i++)
	{
		mn = min(mn, (double)a[n] - a[i]);
		n++;
	}
	cout << mn << endl;
}