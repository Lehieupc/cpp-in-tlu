#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, w;
    cout << "Nhap xau S: ";
    getline(cin, s);
    cout << "Nhap xau W: ";
    getline(cin, w);
    int pos = s.find(w);
    if (pos != string::npos) {
        cout << w << " xuat hien trong S o vi tri " << pos << endl;
    } else {
        cout << w << " khong xuat hien trong S" << endl;
    }
    return 0;
}

