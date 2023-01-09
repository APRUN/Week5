#include <iostream>
using namespace std;
main()
{
    int price;
    char type;
    float tax;
    cout<<"Enter the price: ";
    cin>>price;
    cout<<"Enter type of the vehicle: ";
    cin>>type;
        if(type=='M')
    {
        tax=price*0.06;
        price=price+tax;
    }
    if(type=='E')
    {
        tax=price*0.08;
        price=price+tax;
    }
    if(type=='S')
    {
        tax=tax+0.010;
        price=price+tax;
    }
    if(type=='V')
    {
      tax=tax*0.012;
      price=price+tax;
    }
    if(type=='T')
    {
        tax=tax*0.015;
        price=price+tax;
    }
    cout<<"The price of " <<type <<" type vehicle is " <<price;
}
