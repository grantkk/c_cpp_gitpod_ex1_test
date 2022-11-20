// 判斷分數的等第
#include <iostream>

using namespace std;

/*
內容： 某校為了不讓學生互相比較成績，所以成績上記錄的是成績等第而不是分數，它的規則如下：
 
    90分(含)~100分(含)為A等
    80分(含)~90分(不含)為B等
    70分(含)~80分(不含)為C等
    60分(含)~70分(不含)為D等
    不滿60分者為E等
     現在給你一個成績，請你判斷它是哪一個等第。
*/

int main()
{
    int scores = 0 ; //輸入分數
//    int grade = 0; //計算等第,1:A, 2:B, 3:C, 4:D, 5:E
    
    //輸入分數
    printf("請輸入你的分數,程式會判斷等第:");
    scanf("%d",&scores);
    
    //依照分數來判斷等第
    if ( scores >= 90 )
    {
        printf("你的等第為:A\n");
        
    }
    else if ( scores >= 80)
    {
        printf("你的等第為:B\n");
        
    }
    else if ( scores >= 70)
    {
        printf("你的等第為:C\n");
        
    }
    else if ( scores >= 60)
    {
        printf("你的等第為:D\n");
        
    }
    else
    {
        printf("你的等第為:E\n");
        
    }
    return 0;
}
