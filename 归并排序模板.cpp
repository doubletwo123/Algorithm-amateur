#include<iostream>
using namespace std;
const int  N=10010;
/*什么是归并排序（模板）：
1、递归的终止情况
2、分成子问题
3、递归处理子问题
4、合并子问题
*/
viod merger_sort(int q[],int l,int r)
{
  if(l>r)
    return ;
  int mid=(l+r)>>1;
  //递归调用merger_sort，使得以mid为分界拆分成的两个数组分别完成了排序
  merger_sort(q,l,mid);
  merger_sort(q,mid+1,r);
  /*
  **这里是一个容易混乱的地方**
  */
  int k=0,i=1,j=mid+1,temp[r-l+1];
  //r-l+1其实就是求被排的数组的长度
  while(i<=mid&&j<=r)
  {
    if(q[i]<q[j])tmp[k++]=q[i++];//注意等价于tmp[k]=q[i],k++,i++
    else
      tmp[k++]=q[j++];
  }
  //当右边部分的数都已经被计入到新的数组中，而左边部分仍有剩余
  while(i<=mid)tmp[k++]=q[i++];
  //当左边部分的数都已经被计入到新的数组中，而右边部分仍有剩余
  while(j<=r)tmp[k++]=q[j++];
  
}
int main()
{
  return 0;
}
