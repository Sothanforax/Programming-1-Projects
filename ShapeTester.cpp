#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Box
{
private:
double l,w,h;
public:
void vol(int inptvol[3],int outvol)
{
l = inptvol[0];
w = inptvol[1];
h = inptvol[2];
outvol = l*w*h;
}
void sa(int outsa)
{
outsa = l*l*6;
}

};
class Sphere
{
private:
double r,d;
};
class Pyramid
{
private:
};
int main ()
{
string choice;
int choiceint;
double result;
int input[3];
Box box;
Sphere sph;
Pyramid pyr;


cout<<"\nEnter a Shape to Solve";
cout<<"\nYour choices are: Box,Sphere,Pyramid";
cout<<"\n>";
getline (cin,choice);

if (choice == "box" || choice == "Box" || choice == "b")
{
    choiceint = 1;
}
else if (choice == "sphere" || choice == "Sphere")
{
    choiceint = 2;
}
else if (choice == "pyramid" || choice == "Pyramid" || choice == "p")
{
    choiceint = 3;
}
else
{
cout<<"\nInvalid Shape"<<endl;
}
switch(choiceint)
{
    case 1:
    cout<<"\nLength?"<<endl;
    cin>>input[0];
    cout<<"\nWidth?"<<endl;
    cin>>input[1];
    cout<<"\nHeight?"<<endl;
    cin>>input[2];
box.vol(input[0],input[1],input[2]);
cout<<"\nVolume:"<<result<<endl;
box.sa();
cout<<"\nSurface Area:"<<result<<endl;
    break;

    case 2:
cout<<"\n(R)adius or (D)iameter?"<<endl;
    break;

    case 3:
    break;
}
return 0;
}
