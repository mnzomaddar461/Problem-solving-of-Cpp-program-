#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());
        bool found = false;
        for (int i = 0; i < N - 2 && !found; ++i) {
            int left = i + 1;
            int right = N - 1;
            while (left < right) {
                int sum = A[i] + A[left] + A[right];
                if (sum == S) {
                    found = true;
                    break;
                } else if (sum < S) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
        cout << (found ? "YES\n" : "NO\n");
    }

    return 0;
}
