#include <iostream>

using namespace std;

int main()
{
    string nama, nim;
    int usia;

    cout << "masukkan nama Anda: ";
    cin >> nama;
    cout << "masukkan NIM Anda: ";
    cin >> nim;
    cout << "masukkan usia Anda: ";
    cin >> usia;

    //int i = 0;
  //while (i < usia) {
    //cout << nama << "\n";
    //i++;
  //}
    int i=0;
    do{
        cout << nama << "\n";
        i++;
    }
    while (i<usia);

    return 0;
}
