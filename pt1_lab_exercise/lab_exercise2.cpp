#include <iostream>
using namespace std;

int main() 
{   
    float a, b,result ;
    float sum, difference, product, divide;
    char type;
    string y;
    do
    {
        cout<<"What is your desired operator(+,-,*,/)?"<<endl;
        cin>> type;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout<< "Number 1 is "<<a<<endl;
        cout<<"Number 2 is "<<b<<endl;
        switch (type)
        {
        case '+' : result = a+b;
            cout<< "The operator is: "<<type<<endl;
            cout<< "The result is: "<< result << endl;
            break;
        case '-' : result = a-b;
            cout<< "The operator is: "<<type<<endl;
            cout<< "The result is: "<< result << endl;
            break;
        case '*' : result = a*b;
            cout<< "The operator is: "<<type<<endl;
            cout<< "The result is: "<< result << endl;
            break;
        case '/' : result= a/b;
            cout<< "The operator is: "<<type<<endl;
            cout<< "The result is: "<< result << endl;
            break;
        default: cout<<"Error message"<<endl;
            break;
        }
        cout<<"Do you want to stop? (Yes/No): "<<endl;
        cin>>y;
    } while ( y!= "Yes");
    return 0;
}