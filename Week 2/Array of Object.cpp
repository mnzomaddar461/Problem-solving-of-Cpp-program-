#include<bits/stdc++.h>
using namespace std;

class Students{
    public:
    string name;
    int id;
    float cgpa;
};

int main(){
    int value;
    cout << "Enter Total Students Number: ";
    cin >> value;
    // Students allstudents[value];
    vector<Students> allstudents(value);

    for(int i = 0; i < value; i++){
        cin.ignore();
        cout << "Enter student info (Name, ID, CGPA): " << i+1 << endl;
        getline(cin, allstudents[i].name);
        cin >> allstudents[i].id >> allstudents[i].cgpa;
        cout << endl;
    }

    for(int i = 0; i < value; i++){
        cout << i+1 <<".Name Of Student: "<< allstudents[i].name << endl;
        cout << " ID: " << allstudents[i].id << endl;
        cout << " CGPA: " << allstudents[i].cgpa << endl;
        cout << endl;
    }
    return 0;
}