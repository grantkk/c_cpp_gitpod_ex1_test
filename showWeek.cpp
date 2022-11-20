//讀取輸入數值,顯示相對應之星期英文單字
#include <iostream>

using namespace std;

int main()
{
    int i;
    printf("Please input 1~7 : ");
    scanf("%d", &i);
    
    switch(i)
    {
        case 1:
            printf("This is Monday. \n");
            break;
        case 2:
            printf("This is Tuesday. \n");
            break;
        case 3:
            printf("This is Wednesday. \n");
            break;
        case 4:
            printf("This is Thursday. \n");
            break;
        case 5:
            printf("This is Friday. \n");
            break;
        case 6:
            printf("This is Saturday. \n");
            break;
        case 7:
            printf("This is Sunday. \n");
            break;
        default:
            printf("Please input 1~7. \n");
    }
    
    

    return 0;
}
