/* The problem is to count all the possible paths from top left to bottom right 
of a mxn matrix with the constraints that from each cell you can either move only to right or down */

#include <iostream>
using std::cout; 
using std::cin;

int numberOfPaths(int m, int n)
{
    if (m == 1 || n == 1)
        return 1;

    return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1);
    
}
 
int main()
{
    cout<<numberOfPaths(3, 3);
    return 0;
}


