// 顯示九九乘法表
#include <iostream>
using namespace std;
int main()
{
    int i; //被乘數
    int j; //乘數
    for(i=1;i<10;i++)
    {
	for(j=1;j<10;j++)
	{
            printf(" %d * %d = %2d\n", i,j, i * j );
	}
    }
    cout<<"\nHello World\n";
 
    return 0;
}
