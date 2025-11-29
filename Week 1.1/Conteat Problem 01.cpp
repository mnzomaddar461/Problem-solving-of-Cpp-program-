#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> 

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;

    if (!(std::cin >> N)) {
        return 0;
    }

    std::vector<long long> A(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::sort(A.begin(), A.end());

    for (int i = 0; i < N; ++i) {
        std::cout << A[i] << (i == N - 1 ? "" : " ");
    }
    std::cout << "\n"; 
    std::sort(A.begin(), A.end(), std::greater<long long>());
    for (int i = 0; i < N; ++i) {
        std::cout << A[i] << (i == N - 1 ? "" : " ");
    }
    std::cout << "\n";

    return 0;
}