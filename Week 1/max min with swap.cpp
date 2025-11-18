#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num1, num2, num3;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    cout << "Min value: " << min({num1,num2,num3}) << endl;
    cout << "Max Value: " << max({num1, num2,num3}) << endl;

    // swap num1 & num2;
    swap(num1,num2);


    return 0;
}