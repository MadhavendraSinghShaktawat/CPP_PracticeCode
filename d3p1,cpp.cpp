//use of get() and put()
#include<iostream>
#include<fstream>
#include<string.h>


using namespace std;
int main()
{
char s[40];
cout<<"Enter input=";
gets(s);
int length=strlen(s);
fstream obj;
obj.open("new.txt",ios::out);
for(int i=0;i<length;i++)
obj.put(s[i]);
obj.seekp(0);
cout<<endl<<obj.tellp()<<endl;
obj.close();
//Again open
obj.open("new.txt",ios::in);
char ch;
while(obj.eof()==0)
{
ch=obj.get();
cout<<ch;
}
obj.close();
return 0;
}
