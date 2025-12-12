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
    cout << "--------Enter Total Students Number: --------" << endl;
    cout << "Enter : " ;
    cin >> value;
    vector<Students> allstudents(value);
    cin.ignore();
    for(int i = 0; i < value; i++){
        
        cout << "Enter student info (Name, ID, CGPA): " << i+1 << endl;
        getline(cin, allstudents[i].name);
        cin >> allstudents[i].id >> allstudents[i].cgpa;
        cin.ignore();
        cout << endl;
    }

    for(int i = 0; i < value; i++){
        cout << i+1 <<".Name Of Student: "<< allstudents[i].name << endl;
        cout << " ID: " << allstudents[i].id << endl;
        cout << " CGPA: " << allstudents[i].cgpa << endl;
        cout << endl;
    }

    cout << "---- Show Minimum CGPA:----" << endl;
    Students minimum = allstudents[0];

    for(int i = 1; i < value; i++){
        if(allstudents[i].cgpa < minimum.cgpa){
            minimum = allstudents[i];
        }
    }

    cout << "Name: " << minimum.name << endl;
    cout << "ID: " << minimum.id << endl;
    cout << "CGPA: " << minimum.cgpa << endl;
    return 0;
}