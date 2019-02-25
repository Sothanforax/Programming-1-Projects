#include<iostream>
#include<string>
#include<cmath>
#include"Shapes.h"
using namespace std;
int main ()
{
string choice;
int choiceint;
double result;
Box box;
Sphere sph;
Pyramid pyr;
cout<<"\nEnter a Shape to Solve";
cout<<"\nYour choices are: Box,Sphere,Pyramid";
cout<<"\n>";
getline (cin,choice);
if (choice == "Box,BOX,box,b")
{
    choiceint = 0;
}
else if (choice == "Sphere,SPHERE,sphere,s")
{
    choiceint = 1;
}
else if (choice == "Pyramid,PYRAMID,pyramid,p")
switch(choiceint)
{
    case 0:
    cout<<"\nLength?"<<endl;
    cin>>box.l;
    cout<<"\nWidth?"<<endl;
    cin>>box.w;
    cout<<"\nHeight?"<<endl;
    cin>>box.h;
    result = box.l*box.w*box.h;
cout<<"\nVolume:"<<result<<endl;
    break;

    case 1:
cout<<"\n(R)adius or (D)iameter?";
    break;

    case 2:

    break;
}

}
