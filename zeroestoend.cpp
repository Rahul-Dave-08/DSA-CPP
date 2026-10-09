#include <iostream>
#include <climits>
using namespace std;

void zeroestoend(int arr[], int n)
{
    int i = 0; 
    int j = 0; 

    while (j < n)
    {
        if (arr[i] != 0)                       
        {                                      
            i++;
            j++;
        }
        else if (arr[j] == 0)
        {                                         
            j++;                             
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;                             
            j++;
        }
    }
}
void printarray(int arr[], int size)
{
    cout << endl
         << "printing the array" << endl;
       for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "printing done" << endl;
}
int main()
{
    int num[5] = {0, 2, 0, 6, 1};
    zeroestoend(num, 5);
    printarray(num, 5);
}