//《啊哈，算法！》最快的最简单的排序————桶排序（低阶版）
//principle:for example声明一个数组，长度为100，对于元素a[2]=100,表示的是值为100的数出现了两次；
//基于c++进行演示
//题目要求：输入一串数字{22,3,56,4,7,63,22}一共有7个，要求在输出中按照从小到大的顺序排列。
#include<iostream>
using namespace std;
int main()
{int arr[100];
int t;
for(int i=0;i<=99;i++)
   arr[i]=0;//初始化每一个i对应的出现次数为0；
for(int j=1;j<=7;j++)
    {cin>>t;//循环输入一个数列
   arr[t]++;//每输入一次，就对标记有数值t的桶+1；
   }
    for(int j=0;j<=99;j++)
        {if(arr[j]!=0)//arr[j]的值不为0，则我们在遇到数j的时候就需要循环打印arr[j]次
         for(int lol=1;lol<=arr[j];lol++)
        {cout<<j<<endl;}
       }
return 0;
}
