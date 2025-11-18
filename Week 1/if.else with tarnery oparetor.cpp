#include<iostream>
using namespace std;
int main(){
    // chack even or odd;
    int value;
    cin >> value;
    cout << "Using If...else";
    if(value % 2 == 0){
        cout << endl;
        cout << "Even";
    }
    else{
        cout << endl;
        cout << "Odd";
    }

    // same problem solve tarnery oparetor
    
    cout << endl << "Using Tarnery Oparetor" << endl;
    value % 2 == 0 ? cout << "Even" : cout << "Odd" ;


    return 0;
}