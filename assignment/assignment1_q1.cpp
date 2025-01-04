/*
Group assignment 1 Question 1
Group member:
1. Teoh Xin Yee A24CS0307
2. Cheong Yi Shien A24CS0058
*/


#include <iostream>
using namespace std;

double postageCostWest(double w)
{
    double c;
    if(w>0.1)
    {
        c=w*3.5;
    }
    else
    {
        c=0;
    }
    return c;
}

double postageCostEast(double w)
{
    double c;
    if(w>0.1)
    {
        c=w*5;
    }
    else
    {
        c=0;
    }
    return c;
}

int main()
{
    int item_no=0;
    double weight=0, cost=0, item_charged=0, sum_cost=0;
    char location;
    do
    {
        cout<<"Please enter the number of item(not more than 10): ";
        cin>>item_no;
        if(item_no>10)
        {
            cout<<"Invalid item_no, enter again"<<endl<<endl;
        }
    }while(item_no>10);
    
    for(int count=1;count<=item_no;count++)
    {
        do
        {
        cout<<"Location of item "<<count<<" to send: "<<endl;
        cout<<"(W) West Malaysia"<<endl;
        cout<<"(E) East Malaysia"<<endl;
        cout<<"Please choose the location to send: ";
        cin>>location;
        if((location!='W')&&(location!='E'))
        {
            cout<<"Invalid location, enter again"<<endl<<endl;
        }
        }while((location!='W')&&(location!='E'));
        do
        {
            cout<<"Please enter the weight for item "<<count<<": ";
            cin>>weight;
            if((weight>5)||(weight<=0))
            {
            cout<<"Invalid input"<<endl;
            continue;
            }
            switch(location)
            {
                case 'W' : cost=postageCostWest(weight);
                break;
                case 'E': cost=postageCostEast(weight);
                break;
            }
            if(cost>0.1)
            {
            item_charged++;
            }
            cout<<"The item "<<count<<" postage fee is "<<cost<<endl<<endl;
            sum_cost +=cost;
        }while((weight>5)||(weight<=0));
        
        
        
    }
    cout<<endl<<"The total number of item being charged with postage cost is "<<item_charged<<endl<<endl;
    cout<<"Sum of the overall postage cost is "<<sum_cost;
    
    return 0;
    
}