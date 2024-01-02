#include<iostream>
#include<cmath>
using namespace std;
int main (){
     int choice;
     float area,radius,length,width

     cout<<" 1- Area of circle"<<end1;
     cout<<" 2- Area of rectangle"<<end1;
     cout<<" 3- Area of square"<<end1;
     cout<<" Enter your choice :: ";
     cin>>choice;

     switch (choice)
     {
     case 1:
     cout<<" Enter the radius of circle ::";
     cin>>radius;
     area = 3.14 * pow(radius,2);
        break;
    case 2:
    cout<<" Enter the length of rectanle ::";
    cin>>length;
    cout<<" Enter the width of rectangle ::";
    cin>>width;
    area = length * width;
        break;
    case 3:
    cout<<" Enter the length of side of square";
    cin>>length;
    area = pow(length,2);

     default:
     cout<<"\nInvalid choice...!";
        break;
     }
     cout<<"\nArea :: "<<area<<end1;
      return 0;
}