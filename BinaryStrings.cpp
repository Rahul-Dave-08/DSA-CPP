#include <iostream>
#include <string>

using namespace std;

// Q. Print all binary strings of size n without any consecutive 1s.
// #RECURSION
void BinaryStrings(string ans, int n)
{
    if (ans.length() == n)
    {
        cout << ans << endl;
        return;
    }
    if (ans.empty() || (ans[ans.length() - 1] == '0'))
    {
        BinaryStrings(ans + '0', n);
        BinaryStrings(ans + '1', n);
    }
    else
    {
        BinaryStrings(ans + '0', n);
    }
}

int main()
{
    string ans = "";
    int n = 3;
    BinaryStrings(ans, n); /* OUTPUT :
                              000
                              001
                              010
                              100
                              101
                                */
}