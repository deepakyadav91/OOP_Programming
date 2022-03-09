/* 
A simple program to accept the input in KM and then convert it to
meters, feet, inches and centimeters
*/

#include<iostream>

using namespace std;

int main()
{

    long double distanceInKM;
    
    cout<<"\n Program To Convert KM to m,ft,in and cm \n";
    
    cout<<"\n Enter The Lenght In KM :- ";
    cin>>distanceInKM;
    
    cout<<"\n "<<distanceInKM<<" In KM = "<< 1000 * distanceInKM <<" in Meters(m)";
    cout<<"\n "<<distanceInKM<<" In KM = "<< 3280.84 * distanceInKM <<" in Feet(ft)";
    cout<<"\n "<<distanceInKM<<" In KM = "<< 39370.1 * distanceInKM <<" in Inches(In)";
    cout<<"\n "<<distanceInKM<<" In KM = "<< 100000 * distanceInKM <<" in Centimeters(cm)";
    
    cout<<"\n";
    return 0;
    
}
