#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int cProgram;
    int cppProgram;
    Student(string name, int roll, int cProgram, int cppProgram){
        this->name = name;
        this->roll = roll;
        this->cProgram = cProgram;
        this->cppProgram = cppProgram;
    }
    void totalSkills(){
        cout << "Name: "<< name  << endl << "ID: " << roll << endl << "Avarage Skills: " << (cProgram + cppProgram) / 2 << "%" << endl;
        cout << endl;
    }
};
int main(){
    Student student1("Md Naim Zomaddar", 12421042, 92, 76);
    Student student2("Md Solyman", 12434542, 82, 66);
    Student student3("Md Imam Hosen", 134521042, 89, 96);
    Student student4("Md Ovi Khan", 12421890, 69, 86);
    // cout << student1.name << endl;
    // cout << student1.roll << endl;
    student1.totalSkills();
    student2.totalSkills();
    student3.totalSkills();
    student4.totalSkills();
    return 0;
}