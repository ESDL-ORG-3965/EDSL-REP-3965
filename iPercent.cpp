#include<iostream>
using namespace std;
int main()
{
  int num1,num2,res,res1;
  res = add(num1,num2);
  cout<<"Addition is : "<<res;
  res1 = num1- num2;
  cout<<"Subtraction is : "<<res1;
  res3=num1*num2;
  cout<<"multiplication is:"<<res3;
  return 0;
  
}
int add(int num1,int num2)
{
  int res;
  res = num1 + num2 ;
  return res;
}
