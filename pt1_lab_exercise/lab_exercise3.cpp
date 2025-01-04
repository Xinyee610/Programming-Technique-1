#include <iostream>
using namespace std;
double getLength(double);
double getWidth(double);
double getArea(double, double);
void displayData(double, double, double);

int main()
{
    double length, width, area;
    length=getLength(length);
    width=getWidth(width);
    area=getArea(length, width);
    displayData(length, width, area);
    return 0;
}

double getLength(double length)
{
    cout<<"Please enter the length: ";
    cin>>length;
    return length;
}

double getWidth(double width)
{
    cout<<"Please enter the width: ";
    cin>>width;
    return width;
}

double getArea(double length, double width)
{
    return length*width;
}

void displayData(double length, double width, double area)
{
    cout<<endl;
    cout<<"The rectangular length entered is "<<length<<endl;
    cout<<"The rectangular width entered is "<<width<<endl;
    cout<<"The rectangular area is "<<area<<endl;
}