#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    if (str == "vertebrado") {
        cin >> str;
        if (str == "ave") {
            cin >> str;
            if (str == "carnivoro") {
                cout << "aguia" << endl;
            }
            if (str == "onivoro") {
                cout << "pomba" << endl;
            }
        }
        if (str == "mamifero") {
            cin >> str;
            if (str == "onivoro") {
                cout << "homem" << endl;
            }
            if (str == "herbivoro") {
                cout << "vaca" << endl;
            }
        }
    }
    if (str == "invertebrado") {
        cin >> str;
        if (str == "inseto") {
            cin >> str;
            if (str == "hematofago") {
                cout << "pulga" << endl;
            }
            if (str == "herbivoro") {
                cout << "lagarta" << endl;
            }
        }
        if (str == "anelideo") {
            cin >> str;
            if (str == "hematofago") {
                cout << "sanguessuga" << endl;
            }
            if (str == "onivoro") {
                cout << "minhoca" << endl;
            }
        }
    }
    return 0;
}