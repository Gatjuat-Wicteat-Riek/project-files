#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cnt = 0;

    while (true) {
        int n;
        vector<int> heights;
        int mv = 0;

        cin >> n;
        if (n == 0)
            break;
        cnt++;
        for (int i=0; i<n; i++) {
            int h;

            cin >> h;
            heights.push_back(h);
        }
        while (true) {
            int max = heights[0];
            int min = heights[0];
            int maxIndex = 0;
            int minIndex = 0;

            for (int i=1; i<heights.size(); i++) {
                if (heights[i] > max) {
                    max = heights[i];
                    maxIndex = i;
                }
                else if (heights[i] < min) {
                    min = heights[i];
                    minIndex = i;
                }
            }
            if (max == min)
                break;
            mv++;
            heights[maxIndex]--;
            heights[minIndex]++;
        }
        cout << "Set #" << cnt << endl;
        cout << "The minimum number of moves is " << mv << ".\n\n";
    }

    return 0;
}