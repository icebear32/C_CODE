//代码3
#include <stdio.h>
int main()
{
    int age = 0;
    scanf("%d", &age);
    if (age < 18)
    {
        printf("少年\n");
    }
    else if (age >= 18 && age < 30)
    {
        printf("青年\n");
    }
    else if (age >= 30 && age < 50)
    {
        printf("中年\n");
    }
    else if (age >= 50 && age < 80)
    {
        printf("老年\n");
    }
    else
    {
        printf("老年人\n");
    }

}