/* 
A simple program to calculate the Gross salary in 40% of basic salary is deaness allowance along 
with rent allowance as 20% of the salary
*/

#include<iostream>

using namespace std;

int main()
{
    long int basicSalary;

    cout<<"\n A simple program to calculate gross salary \n";
    
    cout<<"\n Enter Your Basic Salary :- ";
    cin>>basicSalary;
    
    cout<<"\n Your Dearness Allowances Is : "<<(0.4 * basicSalary);
    cout<<"\n Your House Rent Allowances Is : "<<(0.2 * basicSalary);
    
    cout<<"\n\n Hence Your Gross Salary = "<<(basicSalary + (0.4 * basicSalary) + (0.2 * basicSalary));
    
    cout<<"\n";   
    return 0;

}
