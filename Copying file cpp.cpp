#include<iostream>
#include<fstream>
#include <bits/stdc++.h>
using namespace std;
int main(){ 
	ofstream file1;
	file1.open("MAdhav.txt", ios::app);
	char c[40];
	int r = 0, m=0;
	cout << "Hi There!!";
	if (file1 == NULL){
		cout << "File is empty";
	}else{
		while (r == 0){
			if(r==0){
				cout << "Write ur sentence or word here --> ";
				cin.getline(c, 20);
				file1 << "Your name is "<< c << endl;
				cout << "Do you want to right again: if yes than type 0 else 1;\n";
				cin >> r;
			}else{
				break;
			}
		};
	};
	
	return 0;
}
