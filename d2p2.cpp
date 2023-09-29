///opening a file Using the member function open() of the classad
//writing in file
#include<iostream>
#include<fstream>
#include  <bits/stdc++.h>
using namespace std;
int main()
{
ofstream fout;
fout.open("country.txt");
fout<<"india\n";
fout<<"USA\n";
fout<<"UK\n";
fout.close();
fout.open("capital.txt");
fout<<"Delhi\n";
fout<<"Washington\n";
fout<<"Londan\n";
fout.close();

char x[100];
cout << "Write ur text here: ---->  ";
cin.getline(x, 100);
fout.open("Madhav.txt");
fout << x;
fout.close();


}
