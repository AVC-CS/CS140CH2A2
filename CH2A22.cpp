#include <iostream>
#include <fstream>
#include <bitset>
using namespace std;

int main()
{
    ofstream ofs;
    int num = 11;
    int lastdigit = num & 0x00000001;
    bitset<1> onebit(lastdigit);
    cout << onebit << endl;

    ofs.open("data2.bin", ios::out | ios::binary);
    ofs.write((char *)&onebit, sizeof(onebit));
    ofs.close();
}