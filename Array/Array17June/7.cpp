#include <iostream>
#define size 3 // Defining Matrix size
using namespace std;
 
 
int main()
{
    int Arr[size][size];
    int row, col, sum = 0;
 
    //Inputing elements in matrix from user
    cout<<"Enter elements in matrix of size "<<size<<" x "<<size<<"\n";
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            cin>>Arr[row][col];
        }
    }
 
    // Calculating sum of elements of each row of matrix
    for(row=0; row<size; row++)
    {
        sum = 0;
        for(col=0; col<size; col++)
        {
            sum += Arr[row][col];
        }
        //Printing Sum of row elements
        cout<<"Sum of elements of row "<<row+1<<" = "<<sum<<"\n";
    }
 
    // Finding sum of elements of each columns of matrix
    for(row=0; row<size; row++)
    {
        sum = 0;
        for(col=0; col<size; col++)
        {
            sum += Arr[col][row];
        }
        //Printing Sum of columns elements
        cout<<"Sum of elements of column "<<row+1<<" = "<<sum<<"\n";
    }
 
    return 0;
}
