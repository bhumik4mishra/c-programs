/*
Problem Statement:
Given two positive integers, reverse each number, add them together, 
and then reverse the result. Print the final reversed value.

Rules:
- Ignore any leading zeros in the reversed numbers.
- Assume all inputs are within the integer range of the programming language.

Example:
Input: 24 34
Reverse(24) = 42
Reverse(34) = 43
Sum = 42 + 43 = 85
Reverse(85) = 58
Output: 58

Constraints:
- 1 ≤ each number ≤ 1,000,000
- Works only for positive integers.
- Leading zeros are ignored when reversing.
*/
// Online C compiler to run C program online
#include <stdio.h>
int rev(int g){
    int reve=0;
 while(g>0){
    int dig=g%10;
     g=g/10;
    
     reve=dig+reve*10;
  
     
     
 }
    
     printf("%d ",reve);  
    
    return reve;
    
}








int main() {
    int n,m;int sum=0;
   int a=rev(24);
   int b=rev(34);
   sum=a+b;
    int c=rev(sum);
    printf("\n");
    printf("Final:%d",c);
    
    
    return 0;

    
}
