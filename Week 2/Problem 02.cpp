#include<bits/stdc++.h>
using namespace std;
class Player{
    public:
    string name;
    string country;
    int jersey;
    Player(string name, string country, int jersey){
        this->name = name;
        this->country = country;
        this->jersey = jersey;
    }
};
int main(){
    Player* massi = new Player("Massi","Argentina", 10);
    Player* hamza = new Player( "Hamza","Bangladesh", 26);

    cout << "Name: "<< hamza->name << " " << hamza->country << " " << hamza->jersey << endl;
    cout << "Name: "<< massi->name << " " << massi->country << " " << massi->jersey << endl;

    // manual process
    // hamza->country = massi->country;
    // hamza->jersey = massi->jersey;

    *hamza = *massi;
    delete massi;
    cout << "Copy Varsion: ";
    cout << "Name: "<< hamza->name << " " << hamza->country << " " << hamza->jersey << endl;
    return 0;
}