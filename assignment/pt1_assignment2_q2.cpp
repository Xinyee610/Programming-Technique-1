#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//function prototype
void Input(int [], double [], double[], int);
double Output(int [], double [], double[], int);

int main()
{
    const int SIZE = 10;
    int item_no[SIZE];
    double price[SIZE];
    double discount[SIZE];

    Input(item_no, price, discount, SIZE);
    Output(item_no, price, discount,SIZE);
    
    return 0;
}

void Input(int item_no[], double price[], double discount[], int SIZE)
{
    ifstream inFile;
    inFile.open("input.txt"); //open the input file
    if(!inFile.is_open())
    {
        cout << "Input file could not be opened! Terminating!\n";
        exit(1);
    }
    for(int i=0; i<SIZE; i++)
    {
        inFile >> item_no[i];
        inFile >> price[i];
        inFile >> discount[i];
    }

    inFile.close();


}

double Output(int item_no[], double price[], double discount[], int SIZE)
{
    double price_after_discount;
    
    cout<<"Number of item on sale"<<endl<<endl;
    for(int j=0; j<59; j++)
    {
        cout<<"-";
    }
    cout<<endl<<endl<<"Item No"<<setw(12)<<"Price"<<setw(17)<<"Discount(%)"<<setw(23)<<"Price after discount"<<endl<<endl;
    for(int i=0; i<SIZE; i++)
    {
        price_after_discount=0;
        price_after_discount=price[i]*(1-(discount[i]/100));

        cout<<setw(10)<<right<<item_no[i]
        <<setw(10)<<right<<price[i]
        <<setw(10)<<right<<discount[i]
        <<setw(15)<<right<<price_after_discount<<endl;

    }

}