// mbrStatic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{

public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printAll();

	Mahasiswa(string pnama) :nama(pnama) {
		setID();
	}
};


int main()
{
    
}

