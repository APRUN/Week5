#include <iostream>
using namespace std;
float percentage(float,int,float);
int conditions(float,float,int ,float ,float , int , int ,float ,float);
main()
{
    system("cls");
    int volume;
    int p1,p2;
    float p0;
    float p;
    float percent,time;
    float perp1,perp2;
   cout<<"Enter the volume of poool: ";
   cin>>volume;
   cout<<"Enter water pressure from P1 per hour:  ";
   cin>>p1;
   cout<<"Enter water pressure from P2 per hour: ";
   cin>>p2;
   cout<<"Enter the time in hours till when the worker was away: ";
   cin>>time;
      p0=p1+p2;
      p0=p0*time;
      p=p0-volume;
   percent=percentage(percent,volume,p);
   conditions( p0,p, volume, time, percent, p1, p2, perp1, perp2);
   

}

   
float percentage(float percent,int volume,float p)
{
percent=(volume/100)*p;
    return percent;
}

int conditions(float p0,float p,int volume,float time,float percent, int p1, int p2,float perp1,float perp2)
{
    if(p0>volume)
    {
        cout<<"For " <<time <<"hours the pool will overflow with "<<p <<"Liters";
    }
if(p0<=volume)
{
   cout<<"The pool is "<<percent <<"filled." <<"Pipe 1: " << perp1 <<"Perp2: " <<perp2;

}

}
