#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
string inputshit;
cout<<"input text:"<<endl;
getline (cin,inputshit);
ofstream outfile;
outfile.open("tstout.txt",ios::out);
outfile<<inputshit;
cout<<"Data written to file"<<endl;
cin.get();
outfile.close();
return 0;
}
