#include<bits/stdc++.h>
using namespace std;
//contest problem 01
int main(){
    int testcase;
    cin >> testcase;
    cin.ignore();

    while (testcase--)
    {
        string s,x;
        cin >> s ;
        cin >> x ;
        while (true)
        {
            size_t pos = s.find(x);
            if(pos == string:: npos){
                break;
            }
            s.replace(pos, x.size(), "#");
        }
        cout << s << endl;
    }
    
    return 0;
}