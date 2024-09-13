#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs;
    int num = 10;
    ofs.open("data1.bin", ios::out | ios::binary);
    if (!ofs)
    {
        cout << "Error opening file" << endl;
        exit(1);
    }
    ofs.write((char *)&num, sizeof(int));
    ofs.close();
    return 0;
}