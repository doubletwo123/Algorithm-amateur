#include<iostream>
using namespace std;
const int N=100010;
void quick_sort(int l,int r,int a[])
{
  if(l>=r)
  return;
  int i=l-1,j=r+1,x=a[l+r>>1];
  while(li<j)
  {
  do(i++);while(q[i]<x);
  do(j++);while(q[i]>x);
  if(i<j)swap(q[i],q[j]);
  }
  quick_sort(q,l,j);
  quick_sort(q,l+1,r);
}
int main()
{
return 0;
}
