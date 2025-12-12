#include<bits/stdc++.h>
using namespace std;
//Contest Problem 05
class Student{
    public:
    string nm;
    int cls;
    string s;
    int id;
    int math_mark, eng_mark;
};

bool cmp(Student l, Student r){
    if(l.eng_mark > r.eng_mark){
        return true;
    }
    else if(l.eng_mark < r.eng_mark){
        return false;
    }
    else{ 
        if(l.math_mark > r.math_mark){
            return true;
        }
        else if(l.math_mark < r.math_mark){
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