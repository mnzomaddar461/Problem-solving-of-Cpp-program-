#include<iostream>
#include<string>
using namespace std;
int main(){
    int id;
    string name;
    float cgpa;

    cin >> id;
    cin >> name;
    cin >> cgpa;

    std :: cout << "Student ID : " << id <<  std :: endl;
    std :: cout << "Your name: " << name << std ::  endl;
    std :: cout << "CGPA : " << cgpa << std :: endl;

    return 0;
}