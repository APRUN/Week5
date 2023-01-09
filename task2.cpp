#include <iostream>
using namespace std;
float processing(float,float,float,float);
main()
{
    float length,height,width,volume;
    string unit;

    cout<<"Enter the lenght: ";
    cin>>length;
    cout<<"Emter height in meters: ";
    cin>>height;
    cout<<"Enter width in meter: ";
    cin>>width;
    cout<<"Enter the unit: ";
    cin>>unit;
    volume=processing(length,height,width,volume);
    if(unit=="cubicmeter")
    {
        cout<<"The volume is: "<<volume*volume*volume <<"cubicmeter";
    }
    if(unit=="kilometer")
    {
        cout<<"The volume is: " <<volume/1000 <<"km";
    }
    if(unit=="milimeter")
    {
        cout<<"The volume is: " <<volume*1000 <<"mm"; 
    }


}
float processing(float length, float height, float width,float volume)
{
   volume=(length*height)*width;
   volume=volume/3;
   return volume;
}