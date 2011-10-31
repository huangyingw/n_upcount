#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

int nUpCount(int a[ ], int len, int n)
{
  return 0;
}
int main() 
{
  int a[] ={2, 3, 1, 0, -6, 8, -3, -1, 2} ;//3
  cout<<nUpCount(a,sizeof(a)/sizeof(int),5)<<endl;

  int b[]={6, 3, 1};//1
  cout<<nUpCount(b,sizeof(b)/sizeof(int),5)<<endl;

  int c[]={1, 2, -1, 5, 3, 2, -3};//0
  cout<<nUpCount(c,sizeof(c)/sizeof(int),20)<<endl;
  return 0;
}
