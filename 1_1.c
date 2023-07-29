#include <stdio.h>

int main()
{
    int w, a;
    float bmi, h;

    printf("신장, 몸무게, 단위(cm이면 1, m면 2)를 입력하시오");
    scanf("%f %d %d" , &h, &w, &a);
    
    if (a==1)
    { 
        h = h/100;
    }
    
    bmi = w / h*h;

    printf("%f", bmi);

    if (bmi >= 40)
    {
        printf("고도 비만");
    }
    else if (bmi>=35)
    {
        printf("중등도 비만");
    }
    else if (bmi>=30)
    {
        printf("비만");
    }
    else if (bmi>=25)
    { 
        printf("과체중");
    }
    else if (bmi>=18.5)
    {
        printf("정상");
    }
    else 
    {
        printf("저체중");
    }

    return 0;
}