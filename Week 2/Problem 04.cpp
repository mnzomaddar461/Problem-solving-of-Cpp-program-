#include<bits/stdc++.h>
using namespace std;
//contest problem 02
int main(){
    string s;
    getline(cin , s);

    stringstream ss(s);
    string chack;
    bool found = false;
    while(ss >> chack){
        if(chack == "Jessica"){
            found = true;
            break;
        }
    }

    if(found){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}