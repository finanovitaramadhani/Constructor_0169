// chainfunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class buku {
    string judul;

public:
    buku setJudul(string judul)
    {
        this->judul = judul;
        return *this; // chain function
    }
    string getJudul()
    {
        return this->judul;
    }

} bukunya;


int main() 
{
    // bukunya.setJudul("Matematika");
    // cout << bukunya.getJudul();
    cout << bukunya.setJudul("Matematika").getJudul(); // chain function calls
    return 0;

}


