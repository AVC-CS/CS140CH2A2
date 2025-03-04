#include <iostream>
#include <climits>
#include <limits>
#include <fstream>
using namespace std;
int main() {
    int imax = INT_MAX;
    int imin = INT_MIN;
    short smax = SHRT_MAX;
    short smin = SHRT_MIN;
    long lmax = LONG_MAX;
    long lmin = LONG_MIN;
    long long llmax = LLONG_MAX;
    long long llmin = LLONG_MIN;
    unsigned int uintmax = UINT_MAX;
    std::cout << "int max: " << imax <<  " num of bytes: " << sizeof(imax) << std::endl;
    std::cout << "int min: " << imin <<  " num of bytes: " << sizeof(imin) << std::endl;
    std::cout << "short max: " << smax <<  " num of bytes: " << sizeof(smax) << std::endl;
    std::cout << "short min: " << smin <<  " num of bytes: " << sizeof(smin) << std::endl;
    std::cout << "long max: " << lmax <<  " num of bytes: " << sizeof(lmax) << std::endl;
    std::cout << "long min: " << lmin <<  " num of bytes: " << sizeof(lmin) << std::endl;
    std::cout << "long long max: " << llmax <<  " num of bytes: " << sizeof(llmax) << std::endl;
    std::cout << "long long min: " << llmin <<  " num of bytes: " << sizeof(llmin) << std::endl;

    std::cout << "unsigned int max: " << uintmax <<  " num of bytes: " << sizeof(uintmax) << std::endl;

    std::cout << "shrt max: " << std::numeric_limits<short>::max() <<  " num of bytes: " << sizeof(std::numeric_limits<short>::max()) << std::endl;
    std::cout << "shrt min: " << std::numeric_limits<short>::min() <<  " num of bytes: " << sizeof(std::numeric_limits<short>::min()) << std::endl;
    short max = std::numeric_limits<short>::max();

    ofstream ofs;
    ofs.open("number.bin", ios::binary);
    if(ofs.fail())
    {
        cerr<<"File open error\n";
        exit(0);
    }
    ofs.write((char *)&imax, sizeof(imax));
    ofs.write((char *)&imin, sizeof(imin));
    ofs.write((char *)&smax, sizeof(smax));
    ofs.write((char *)&smin, sizeof(smin));
    ofs.write((char *)&lmax, sizeof(lmax));
    ofs.write((char *)&lmin, sizeof(lmin));
    ofs.write((char *)&llmax, sizeof(llmax));
    ofs.write((char *)&llmin, sizeof(llmin));
    ofs.write((char *)&uintmax, sizeof(uintmax));

    return 0;
}