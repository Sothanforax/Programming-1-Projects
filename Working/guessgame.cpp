#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main ()
{
int ingss;
srand (time(NULL));
int randnum = rand()% 100;
cout<<"\nWelcome to the number guessing game!";
cout<<"\nEnter a random number from 0-100 Below";
cout<<"\n>";
cin>>ingss;
if (ingss == randnum)
{
cout<<"\nYour guessed number "<<ingss<<" is equal to "<<randnum<<" Congrats!";
}
else if (ingss < randnum)
{
cout<<"\nOh! Your guess "<<ingss<<" Is Too Low compared to "<<randnum<<" please try again";
}
else if (ingss > randnum)
{
cout<<"\nOh! your guess "<<ingss<<" is too high compared to "<<randnum<<" please try again";
}
return 0;
}
