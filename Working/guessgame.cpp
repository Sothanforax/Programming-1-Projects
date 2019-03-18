#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main ()
{
bool trybit = true;
int trycount = 0;
int ingss;
srand (time(NULL));
int randnum = rand()% 100;
cout<<"\nWelcome to the number guessing game!";
while (trybit == true)
{
cout<<"\nEnter a random number from 0-100 Below";
cout<<"\n>";
cin>>ingss;
if (ingss == randnum)
{
cout<<"\nYour guessed number "<<ingss<<" is equal to "<<randnum<<" Congrats!"<<endl;
cout<<"And it took you "<<trycount<<" Tries!"<<endl;
trybit = false;
}
else if (ingss < randnum)
{
cout<<"\nOh! Your guess "<<ingss<<" Is Too Low,please try again";
trycount++;
}
else if (ingss > randnum)
{
cout<<"\nOh! your guess "<<ingss<<" is too high,please try again";
trycount++;
}
}
return 0;
}
