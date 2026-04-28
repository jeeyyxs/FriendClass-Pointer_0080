#include <iostream>
#include <string>
using namespace std;

class mahasissa
{
private:
    string nama;
public:
    friend void setNama(mahasiswa &a, string);
};
