#include<bits/stdc++.h>
using namespace std;
int main(){
    string name = "M Naim Zomaddar";
    cout << "String Size: " << name.size() << endl;
    cout << "String Max Size: " << name.max_size() << endl;
    cout << "String Capacity: " << name.capacity() << endl;
    // cout << "String Clear: " << name.clear() << endl;
    if( name.empty() == true){
        cout << "String Empty" << endl;
    }
    else{
        cout << "String Not Empty" << endl;
    }
    string role = " Wp Expert";
    name.append(role);
    cout << "String Add: " << name << endl;
    name.push_back('W');
    name.push_back('P');
    cout << "String Push: " << name << endl;
    name.pop_back();
    cout << "String Pop: " << name << endl;
    name.assign(role);
    cout << "String Assign: " << name << endl;
    cout << "String Erase: " << name.erase(5,3) << endl;
    cout << "String replace: " << name.replace(6, 2, "WP") << endl;
    cout << "String Inseart: " << name.insert(14, "WP Expert") << endl;
    name.resize(20, 'x');
    cout << "String Resizing: " << name << endl;
    return 0;
}