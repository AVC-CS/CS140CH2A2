#include <iostream>
#include <climits>
#include <fstream>
using namespace std;
int main(){
    ofstream ofs;
    ofs.open("data.bin", ios::out | ios::binary);
    short maxnum = SHRT_MAX;
    short minnum = SHRT_MIN;
    cout << "maxnum: " << maxnum << endl;
    cout << "minnum: " << minnum << endl;
    ofs.write((char*)&maxnum, sizeof(short));
    ofs.write((char*)&minnum, sizeof(short));
    int maxint = INT_MAX;
    int minint = INT_MIN;
    cout << "maxnum: " << maxint << endl;
    cout << "minnum: " << minint << endl;
    ofs.write((char*)&maxint, sizeof(int));
    ofs.write((char*)&minint, sizeof(int));
}
