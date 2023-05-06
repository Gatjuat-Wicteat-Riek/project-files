#include <iostream>
#include <algorithm>
#define COLOMBIA cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define RIEK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#include <cmath>
using namespace std;
int main(){

    COLOMBIA
    RIEK

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
	for (int i = 1; c - i < n, n <= c; i++){
	
		mn = min(mn, (double)a[n] - a[i]);
		n++;
	}
	cout << mn;
    return 0;
}