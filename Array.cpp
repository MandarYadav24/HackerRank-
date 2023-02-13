/*

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd

*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a = 0, b = 0, i = 0;
    
    cin >> a >> b;
    for(i = a; i <= b; i++)
    {
        if(i <= 9)
        {
            if(i == 1)
            {
                cout << "one\n";
            }
            else if(i == 2)
            {
                cout << "two\n";
            }
            else if(i == 3)
            {
                cout << "three\n";
            }
            else if(i == 4)
            {
                cout << "four\n";
            }
            else if(i == 5)
            {
                cout << "five\n";
            }
            else if(i == 6)
            {
                cout << "six\n";
            }
            else if(i == 7)
            {
                cout << "seven\n";
            }
            else if(i == 8)
            {
                cout << "eight\n";
            }
            else if(i == 9)
            {
                cout << "nine\n";
            }
            
        }
        else if(i > 9)
        {
            if(i % 2 == 0)
            {
                cout << "even\n";
            }
            else 
            {
                cout << "odd\n";
            }
        }
    }
    return 0;
}
