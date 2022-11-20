//輸入一個年份，判斷該年份是否為閏年
#include <iostream>

using namespace std;

int main()
{
    int year=0; //輸入年份
    bool isLeap=0; //是否為閏年
    
    //輸入年份
    printf("請輸入一個年份，程式會判斷該年份是否為閏年:");
    scanf("%d",&year);
    
    //閏年規則如下：
    //公元年分非4的倍數，為平年。
    //公元年分為4的倍數但非100的倍數，為閏年。
    //公元年分為100的倍數但非400的倍數，為平年。
    //公元年分為400的倍數為閏年。
    
    if ( year % 400 == 0)
    {
        printf("此年份為閏年");
    }
    else if ( year % 100 == 0)
    {
        printf("此年份為平年");
    }
    else if ( year % 4 == 0 )
    {
        printf("此年份為閏年");
    }
    else 
    {
        printf("此年份為平年");
    }
    
    return 0;
}
