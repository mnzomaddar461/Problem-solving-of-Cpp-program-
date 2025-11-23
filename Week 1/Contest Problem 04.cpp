#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    char section;
    int total_marks;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        const int N = 3; 
        Student best;
        for (int i = 0; i < N; i++) {
            Student s;
            cin >> s.id >> s.name >> s.section >> s.total_marks;

            if (i == 0) {
                best = s;
            } else {

                if (s.total_marks > best.total_marks) {
                    best = s;
                }

                else if (s.total_marks == best.total_marks && s.id < best.id) {
                    best = s;
                }
            }
        }

        cout << best.id << " " << best.name << " "
            << best.section << " " << best.total_marks << "\n";
    }

    return 0;
}
