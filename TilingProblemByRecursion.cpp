#include <iostream>
using namespace std;

int TilingProblem(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return TilingProblem(n - 1) + TilingProblem(n - 2);
}