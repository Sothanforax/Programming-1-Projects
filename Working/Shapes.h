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
cout<<"\nSurface Area:"<<result<<endl;;
}
};
class Sphere
{
private:
double rad,dia;
double result;
int charconv;
public:
char raddiam;
void getvol(double inptvol)
{
    if (raddiam == 'r' || raddiam == 'R') 
    {
     charconv = 2;   
    }
    else if (raddiam == 'd' || raddiam == 'D')
    {
        charconv = 1;
    }
    switch (charconv)
    {
        case 1:
        dia = inptvol;
        result = (1*3.14*dia*dia*dia)/6;
        cout<<"Volume:"<<result<<endl;
        result = 3.14*dia*dia;
        cout<<"Surface area:"<<result<<endl;
        break;
        case 2:
        rad = inptvol;
        result = (4*3.14*rad*rad*rad)/3;
        cout<<"\nVolume:"<<result<<endl;
        result = 4*3.14*rad*rad;
        cout<<"Surface area:"<<result<<endl;
        break;
}
}
};
class Pyramid
{
private:
double result;
double l,w,h;
public:
void getvol(double bl,double bw,double ph)
{
    l = bl;
    w = bw;
    h = ph;
    result = l*w*h/3;
    cout<<"\nVolume:"<<result<<endl;
}
void getsa()
{
    cout<<"Surface Area:Im not implementing that formula."<<endl;
}
};
