#include<bits/stdc++.h>
using namespace std;
int main(){
    string value;
    cin >> value;
    sort(value.begin(), value.end());
    // for char sort(value, value + strlen(value));
    cout << value << endl;
    return 0;
}