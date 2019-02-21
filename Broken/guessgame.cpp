#include <iostream>
#include <cstdlib>
#include <time.h>
#define RAND_MAX 100
using namespace std;
int main ()
{
int ingss;
srand (time(0));
int randnum = rand();
cout<<"\nWelcome to the number guessing game!";
cout<<"\nEnter a random number from 0-100 Below";
cout<<"\n>";
cin>>ingss;
if (ingss == randnum)
{
cout<<"\nYour guessed number" <<ingss<< "is equal to" <<randnum<< "Congrats";
}
else if (ingss < randnum)
{
cout<<"\nOh your guess is too low please try again";
cout<<"\n r:"<<randnum<<endl;;
}
else if (ingss > randnum)
{
cout<<"\nOh your guess is too high please try again";
cout<<"\n r:"<<randnum<<endl;
}
return 0;
}
