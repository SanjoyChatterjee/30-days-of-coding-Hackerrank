#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } int max = -9 * 7;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (j + 2 < 6 && i + 2 < 6) {
                int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
                if (sum > max) max = sum;
            }
        }
    }

    cout << max;


    return 0;
}
