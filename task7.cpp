#include <iostream>
using namespace std;
void processing(int hours,int minutes,int more);
void processing2(int hours,int minutes,int more);
main()
{
    int hours;
    int minutes;
    int more;
    cout<<"Enter hours: ";
    cin>>hours;
    cout<<"Enter minutes: ";
    cin>>minutes;
     processing2(hours,minutes,more);
     processing(hours,minutes,more);
    
    
    
    

}
 void processing(int hours,int minutes,int more)
{
     minutes=minutes+15;
     if(minutes>60)
     {
        hours=hours+1;
        more=minutes-60;
    cout<<more;}
    
      if(minutes<60)
     {
        cout<<hours <<":" << minutes;

     }
     }

     void processing2(int hours,int minutes,int more)
{
    if(minutes>60)
     {
        hours=hours+1;
        
    cout<<hours <<":";
    
      }
}
