//  Assignment 2.5
//  Angela Flores Figueroa
//  CSCI 40 Fall 2022
//

#include <iostream>
using namespace std;
int main()
{
    // Write a C++ program to write a program that can be used at a department store’s register that records the number of customers who spent between $0.00 - $200.00, and the number of customers who spent between $200.01 - $800.00, and the number of customers who spent $800.01 or more. At the end of a day, the program will print out the number of customers in each of categories and total spending of the customers in each categories.
    
    int spending, amount1=0, amount2=0, amount3=0, total1=0, total2=0, total3=0, a=0;
    
    while (a==0){
        cout <<"Please enter the customer's spending amount: "<<endl;
        cin >> spending;
        
        if(spending <= 200.00){
            amount1++;
            total1=total1+spending;}
        else if (spending <= 800.00){
            amount2++;
            total2=total2+spending;}
        else {
            amount3++;
            total3=total3+spending;}
        
        cout << "Do you wish to continue the program? Enter 0 for yes, any other number for no." <<endl;
        cin >> a; }
    
    cout<<"The total number of customers with their spending between $1 and $200 is: "<<amount1<<endl;
    cout<<"The total spending is: "<<total1<<endl;
    
    cout<<"The total number of customers with their spending between $200 and $800 is: "<<amount2<<endl;
    cout<<"The total spending is: "<<total2<<endl;
    
    cout<<"The total number of customers with their spending more than $800 is: "<<amount3<<endl;
    cout<<"The total spending is: "<<total3<<endl;
    
    return 0;
}
