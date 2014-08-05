#include<iostream>
using namespace std;
int main()
{
  int num1,num2,res;
  res = add(num1,num2);
  cout<<"Addition is : "<<res;
  return 0;
}
int add(int num1,int num2)
{
  int res;
  res = num1 + num2 ;
  return res;
}
