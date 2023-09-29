#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

class student {
public:
    string name;
    int rollno;
    void putinfo();
    void getinfo();
};

void student::getinfo() {
    cout << "Name: ";
    cin >> name;
    cout << "Roll number: ";
    cin >> rollno;
}

void student::putinfo() {
    cout << "Name: " << name << endl; 
    cout << "Roll number: " << rollno << endl;	
}

int main() {
    student s1, s2;
    s1.getinfo();
    fstream fobj;
    fobj.open("n.txt", ios::out | ios::binary);
    fobj.write((char*)&s1, sizeof(s1));
    fobj.close();

    fobj.open("n.txt", ios::in | ios::binary);
    fobj.read((char*)&s2, sizeof(s2));
    s2.putinfo();
    fobj.close();

    return 0;
}

