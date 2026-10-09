#include <iostream>

using namespace std;

int peakelementindex(int arr[], int n)
{
    int ans = -1;
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[m] < arr[m + 1])
        {

            s = m + 1;
        }
        else
        {
            e = m;
        }
        m = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int num[7] = {1, 3, 4, 5, 6, 2, 0};
    int ans = peakelementindex(num, 7);
    cout << ans;
}