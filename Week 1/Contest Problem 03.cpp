#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string line;
    while (std::getline(std::cin, line)) {

        std::vector<int> frequency(26, 0); // 'a' to 'z'

        // Count frequency
        for (char c : line) {
            if (c >= 'a' && c <= 'z') {
                frequency[c - 'a']++;
            }
        }

        // Print letters in alphabetical order according to frequency
        for (int i = 0; i < 26; ++i) {
            char letter = 'a' + i;
            for (int j = 0; j < frequency[i]; ++j) {
                std::cout << letter;
            }
        }
        std::cout << "\n";
    }

    return 0;
}
