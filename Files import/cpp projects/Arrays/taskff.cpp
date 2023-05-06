#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int test_case, size, * arr, sum, min;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> size;
		arr = new int[size];
		sum = 0;
		for (int m = 0; m < size; m++) {
			cin >> arr[m];
		}
		if (size == 1)
			cout << 0 << endl;
		else {
			min = arr[size - 1];
			for (int m = size - 2; m >= 0; m--) {
				if (arr[m] > min)
					sum++;
				else if (arr[m] < min)
					min = arr[m];
			}
			cout << sum << '\n';
		}
	}
	return 0;
}
