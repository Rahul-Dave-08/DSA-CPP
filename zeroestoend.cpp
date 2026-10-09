#include <iostream>
#include <climits>
using namespace std;

void zeroestoend(int arr[], int n)
{
    int i = 0; // variable for zero
    int j = 0; // variable for non zero

    while (j < n)
    {
        if (arr[i] != 0)                       //why i++ and j++???????
        {                                  //as i wanted 0 it didn't get hence..    
            i++;
            j++;
        }
        else if (arr[j] == 0)
        {                                      // why j++ ?    
            j++;                             //as j wanted non zero , it didn't..
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;                             //both i and j got what they wanted
            j++;
        }
    }
}
void printarray(int arr[], int size)
{
    cout << endl
         << "printing the array" << endl;
    // print the array
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