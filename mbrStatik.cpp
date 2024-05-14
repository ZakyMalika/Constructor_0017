#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
public:
    static  int nim;
    int id;
    string nama;

    void setID();

    void printALL();
    mahasiswa(string pnama)
    {
        nama = pnama;
        setID();
    }
};

int mahasiswa::nim = 113; 

void mahasiswa::printALL()
{
    cout << "ID     = " << id << endl;
    cout << "Nama   = " << nama << endl;
};