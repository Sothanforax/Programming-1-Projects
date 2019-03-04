#include<iostream>
#include<string>
using namespace std;
class Box
{
private:
double l,w,h;
double result;
public:
void getvol(double inptvol1,double inptvol2,double inptvol3)
{
l = inptvol1;
w = inptvol2;
h = inptvol3;
result=l*w*h;
cout<<"\nVolume:"<<result;
}
void getsa()
{
result = l*l*6;
cout<<"\nSurface Area:" << result;
}
};
class Sphere
{
private:
double r,d;
double result;
double pi = 3.141592654;
//Texas Instruments pi
int charconv;
public:
char raddiam;
void getvol(double inptvol)
{
    if (raddiam == 'r') 
    {
     charconv = 2;   
    }
    else if (raddiam == 'd')
    {
        charconv = 1;
    }
    switch (charconv)
    {
        case 1:
        d = inptvol;
        break;
        case 2:
        r = inptvol;
        result = 4/3*pi*r*r*r;
        cout<<"\nVolume:"<<result;
        break;
}
}
};
class Pyramid
{
private:
double result;
};
int main ()
{
string choice;
int choiceint;
double input[3];
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
else if (choice == "sphere" || choice == "Sphere" || choice == "s")
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
    cout<<"Width?"<<endl;
    cin>>input[1];
    cout<<"Height?"<<endl;
    cin>>input[2];
box.getvol(input[0],input[1],input[2]);
box.getsa();
    break;

    case 2:
cout<<"\n(R)adius or (D)iameter?"<<endl;
cin>>sph.raddiam;
cout<<"\nRadius/Diameter?"<<endl;
cin>>input[0];
    break;

    case 3:
    break;
}
return 0;
}
