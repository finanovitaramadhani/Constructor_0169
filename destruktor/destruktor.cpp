// destruktor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class angka {
private:
    int* arr;
    int panjang;
public:
    angka(int); //Constructor
    ~angka(); //Destructor
    void cetakData();
    void isiData();
};

//Definisi member Function
angka::angka(int i) { //Constructor
    panjang = i;
    arr = new int[i];
    isiData();
}

angka::~angka() { //Destructor
    cout << endl;
    cetakData();
    delete[]arr;
    cout << "Alamat Array sudah Dilepaskan" << endl;
}

void angka::cetakData() {
    for (int i = 1; i <= panjang; i++) {
        cout << i << " = " << arr[i] << endl;
    }
}

void angka::isiData() {
    for (int i = 1; i <= panjang; i++) {
        cout << i << "="; cin >> arr[i];
    }
    cout << endl;
}


int main()
{
    
}


