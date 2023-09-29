#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    float height[4] = {17.5, 15.0, 3.8, 5.0};
    string xyz = "Hii";

    ofstream outfile;
    outfile.open("abc");
    outfile.write((char *)height, sizeof(height));
    outfile.write(xyz.c_str(), xyz.size());
    outfile.close();

    float p[4];
    char xyz1[4];
    
    ifstream infile;
    infile.open("abc");
    infile.read((char*)p, sizeof(p));
    infile.read(xyz1, sizeof(xyz1));
    infile.close();

    cout << p[0] << endl << p[1];
    cout << endl << xyz1[0] << xyz1[1] << xyz1[2];
    
    return 0;
}

