#include<bits/stdc++.h>
using namespace std;
class Students{
    public:
    string name;
    int id;
    float cgpa;
};

bool cmp(Students l, Students r){
    return l.cgpa < r.cgpa;
}

int main(){
    int value;
    cin >> value;
    vector<Students> allStudents(value);
    cin.ignore();
    for(int i = 0; i < value; i++){
        getline(cin, allStudents[i].name);
        cin >> allStudents[i].id;
        cin >> allStudents[i].cgpa;
        cin.ignore();
    }

    sort(allStudents.begin(), allStudents.end(), cmp);
    for(int i = 0; i < value; i++){
        cout << i + 1 << ". Name: " << allStudents[i].name << endl;
        cout << "  ID: " << allStudents[i].id << endl;
        cout << "  CGPA: " << allStudents[i].cgpa << endl;
    }

    return 0;
}