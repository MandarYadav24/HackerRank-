/*
Task

Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

Declare  variables: two of type int and two of type float.
Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
Use the  and  operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.
Input Format

The first line contains two integers.
The second line contains two floating point numbers.

Constraints

 integer variables 
 float variables 
Output Format

Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to  decimal place) separated by a space on the second line.

Sample Input

10 4
4.0 2.0
Sample Output

14 6
6.0 2.0
  
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int iNo1 = 0;
    int iNo2 = 0;
    int iSum = 0;
    int iSub = 0;
    
    float fValue1 = 0;
    float fValue2 = 0;
    float fSum = 0;
    float fSub = 0;
    
    scanf ("%d %d",&iNo1, &iNo2);
    
    iSum = iNo1 + iNo2;
    iSub = iNo1 - iNo2;
    
    printf("%d %d\n",iSum, iSub);
    
    scanf ("%f %f", &fValue1, &fValue2);
    
    fSum = fValue1 + fValue2;
    fSub = fValue1 - fValue2;
    
    printf("%.1f %.1f\n",fSum, fSub);
    return 0;
}
