// 顯示數字的所有因數
#include <iostream>
using namespace std;
int main()
{
    int number1; //由鍵盤讀取一個數字

    printf("請輸入一個數字，程式會找出此數字的所有因數:");
    //scanf("%d", &number1);
    number1 = 60;

    printf("%d的所有因數為:\n",number1);

    for(int i=1;i<= number1;i++)
    {
	if( ( number1 % i ) == 0)
	{
	    printf("%d ",i);
	}
    }
 
    printf("\n");
    return 0;
}
