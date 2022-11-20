//輸入一個年份，判斷該年份是否為閏年
#include <iostream>

using namespace std;

int main()
{
    int year = 0; //輸入年份
    int month = 0;
    bool isLeap = false; //是否為閏年
    
    //輸入年份
    printf("請輸入一個年份及月份,程式會判斷該月份有幾天:");
    scanf("%d%d", &year, &month);
    
    if ( year % 400 == 0)
    {
        isLeap = true;
        printf("此年份為閏年.\n"); 
    }
    else if ( year % 100 == 0)
    {
        isLeap = false;
        printf("此年份為平年.\n");
    }
    else if ( year % 4 == 0 )
    {
        isLeap = true;
        printf("此年份為閏年.\n");
    }
    else 
    {
        isLeap = false;
        printf("此年份為平年.\n");
    }
    
    //若為2月,需判斷閏年:29天, 平年:28天
    if ( month ==2 )
    {
        if ( isLeap == true )
        {
            printf("此月份有:29天.\n");
        }
        else
        {
            printf("此月份有:28天.\n");
        }
    }
    else if ( month ==2 || month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("此月份有:30天.\n");
    }
    else
    {
        printf("此月份有:31天.\n");
    }
    
    
    
    return 0;
}
