#include <iostream>
#include <cmath>
using namespace std;
main()
{
   float projecthours,firmdays,workers,days,calc;
 cout<<"Enter project hours: ";
cin>>projecthours;
cout<<"Enter firm days: ";
cin>>firmdays; //the days left for firm after calculation
cout<<"Enter number of workers: ";
cin>>workers;
days=firmdays*0.90;
floor(days);
firmdays= (workers*10)*days; //time left for firm workers
if(projecthours>firmdays)
  {
    calc=firmdays-projecthours;
    cout<<"Not enough time! "<< calc <<" hours left";
  }
if(projecthours<firmdays)
{
   calc=firmdays-projecthours;
   cout<<"You can do it you has extra time of "<<calc <<" hours";
}

}