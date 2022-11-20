//計算圓半徑的面積及周長
#include <iostream>
using namespace std;

int main(void)
{
    float radius = 0; //圓半徑
    double perimeter = 0; //圓周長
    double area = 0; //圓面積
    printf("請輸入一個圓半徑r:"); //輸入圓半徑
    scanf("%f",&radius);
    
    printf("您輸入的圓半徑為:%f",radius);
    
    if ( radius >0 ) //若圓半徑>0,計算圓半徑的面積及周長,否則不做計算
    {
        perimeter = 2 * 3.14 * radius;
        area = 3.14 * radius * radius;
        printf("圓周長為:%lf\n",perimeter);
        printf("圓面積為:%lf\n",area);
    }
    else 
    {
        printf("輸入圓半徑有誤!\n");
    }

    return 0;
    
}
