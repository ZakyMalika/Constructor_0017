#include <iostream>
#include <string>
using namespace std;

class angka
{
private:
    int *arr;
    int panjang;
public:
    angka(int); //constructor
    ~angka();  //destructor
    void cetakData();
    void isiData();
};

//Definisi member fungsion
angka::angka(int i)//constructor
{
    panjang = i;
    arr = new int[i];
    isiData();
}