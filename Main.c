//3. Print the factors of a number.
#include <stdio.h>

int main()
{
    int num;
    int factor=1;
    printf("Enter a number >>");
    scanf("%d", &num);
    while(factor <= num)
    {
        if(num%factor == 0)
        {
            printf("%d is one of the factor of %d\n", factor, num);
            factor++;
        }
        else
        {
            factor++;
            continue;
        }
    }
    printf("Thank you");
    getchar();
    getchar();
}
