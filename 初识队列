#基于《啊哈，算法》P26
#结构体的介绍
/*struct queue{
int data[102];
int head;
int tail;};*/
#代码实例基于《啊哈，算法》P26解密qq号进行
#include<iostream>
using namespace std;
struct queue{
 int data[100];
 int head;
 int tail;
  };
  int main()
  { struct queue q;
  q.head=1;
  q.tail=1;
  //依次向队列插入9个数
  for(int i=1;i<=9;i++)
  { cin>>q.data[q.tail];
  q.tail++;
    }
  //队列不为空时执行循环  
    while(q.head<q.tail)
    {//打印队首并将队首出队
      cout<<q.data[q.head]<<endl;
    q.head++;
    将新的队首添加到队尾
    q.data[q.tail]=q.data[q.head];
    q.tail++; 
    //再次将队首出队
    q.head++;
        }
     return 0;
     }
