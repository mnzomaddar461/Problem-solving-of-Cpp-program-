#include<bits/stdc++.h>
using namespace std;
//Contest Problem 03
class Student{
    public:
    string nm;
    int cla;
    char s;
    int id;
};
int main(){
    int n;
    cin >> n;
    cin.ignore();
    Student student[n];

    for(int i = 0; i < n ; i++){
        cin >> student[i].nm;
        cin >> student[i].cla;
        cin >> student[i].s;
        cin >> student[i].id;
        cin.ignore();
    }

    for(int i = 0; i < n / 2; i++) {
        swap(student[i].s, student[n - 1 - i].s);
    }

    for(int i = 0; i < n ; i++){
        cout << student[i].nm << " "
            << student[i].cla << " "
            << student[i].s << " "
            << student[i].id << endl;
    }
    
    return 0;
}
