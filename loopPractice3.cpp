// 顯示九九乘法表, 三個一列
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
            printf(" %d * %d = %2d  ", i,j, i * j );
	    if ( j % 3 == 0)
	    {
		    printf("\n");
	    }
	}
        printf("\n");
    }
 
    return 0;
}
