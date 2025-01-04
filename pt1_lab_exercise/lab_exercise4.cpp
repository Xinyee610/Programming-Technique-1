/* NAME: TEOH XIN YEE
   SECTION: 02*/

#include <iostream>
using namespace std;

double totalMarks(int [], int);

int main()
{
    const int STUDENTS=10;
    int mark[STUDENTS]={70, 85, 57, 64, 83, 92, 75, 69, 95, 72};
    double total, average;

    for(int i=0; i<STUDENTS; i++)
    {
        total+=mark[i];
    }
    
    cout<<"total mark is: "<<total<<endl;

    average= total/STUDENTS;
    cout<<"average mark is: "<<average<<endl;

}
