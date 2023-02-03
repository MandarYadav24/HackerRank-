/*
Task

Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

Note

There is not built in max function in C. Code that will be reused is often put in a separate function, e.g. int max(x, y) that returns the greater of the two values.

Input Format

Input will contain four integers -  , one on each line.

Output Format

Print the greatest of the four integers.
Note: I/O will be automatically handled.

Sample Input

3
4
6
5
Sample Output

6
*/

#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int iNo1, int iNo2, int iNo3, int iNo4)
{
    if((iNo1>iNo2) && (iNo1>iNo3) && (iNo1>iNo4))
    {
        return iNo1;
    }
    else if ((iNo2>iNo1) && (iNo2>iNo3) && (iNo2>iNo4))
    {
        return iNo2;
    }
    else if ((iNo3>iNo1) && (iNo3>iNo2) && (iNo3>iNo4))
    {
        return iNo3;
    }
    else
    {
        return iNo4;
    }
}
