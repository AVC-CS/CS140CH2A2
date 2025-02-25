#include <iostream>
#include <fstream>
#include <bitset>
using namespace std;

int main()
{
	int num = 11;
	char *cp;

	ofstream ofs;
	ofs.open("data2.bin", ios::out | ios::binary);
	cp = (char*)&num;
	ofs.write((char*)&num, sizeof(num));
	ofs.write(cp, sizeof(char));

	int firstbit = num & 0x00000001;
	bitset<1> bit(firstbit);
	ofs.write(reinterpret_cast<char*>(&bit), sizeof(bit));
	ofs.close();
}
