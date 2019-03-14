#include<iostream>
#include<string>
using namespace std;

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
cout<<"\nThe Radius/Diameter?"<<endl;
cin>>input[0];
sph.getvol(input[0]);
    break;

    case 3:
    cout<<"\nBase Length?"<<endl;
    cin>>input[0];
    cout<<"Base Width"<<endl;
    cin>>input[1];
    cout<<"Height?"<<endl;
    cin>>input[2];
    pyr.getvol(input[0],input[1],input[2]);
    pyr.getsa();
    break;
}
return 0;
}
