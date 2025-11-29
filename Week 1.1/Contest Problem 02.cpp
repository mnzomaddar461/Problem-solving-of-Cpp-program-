#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<long long> A(N);

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::sort(A.begin(), A.end(), std::greater<long long>());


    for (int i = 0; i < N; i++) {
        std::cout << A[i];
        if (i != N - 1) std::cout << " ";
    }

    return 0;
}
