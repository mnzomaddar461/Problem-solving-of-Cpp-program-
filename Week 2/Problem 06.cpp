#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string nm;
    int cls;
    string s;
    int id;
    int math_mark, eng_mark;
    int sum;
};

bool cmp(Student l, Student r){
    if(l.sum > r.sum){
        return true;
    }
    else if(l.sum < r.sum){
        return false;
    }
    else{ 
        if(l.id < r.id){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int n;
    cin >> n;
    Student student[n];

    for(int i = 0; i < n; i++){
        cin >> student[i].nm
            >> student[i].cls
            >> student[i].s
            >> student[i].id
            >> student[i].math_mark
            >> student[i].eng_mark;
        student[i].sum = student[i].math_mark + student[i].eng_mark;
    }

    sort(student, student + n, cmp);

    for(int i = 0; i < n; i++){
    cout << student[i].nm << " "
        << student[i].cls << " "
        << student[i].s << " "
        << student[i].id << " "
        << student[i].math_mark << " "
        << student[i].eng_mark << endl;
    }
    return 0;
}