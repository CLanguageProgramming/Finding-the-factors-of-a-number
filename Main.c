//3. Print the factors of a number.
#include <stdio.h>

int main()
{
    int num;
    int factor=1;
    printf("Enter a number >>");
    scanf("%d", &num);
    for(int i=1;i<=num;i++)
    {
        if(num%i == 0)
        {
            printf("%d is one of the factor of %d\n", i, num);
            factor++;
        }
        else
        {
            continue;
        }
    }
    factor--;
    printf("%d has %d factors\n", num, factor);
    if(factor == 2)
    {
        printf("%d is a Prime Number\n", num);
    }
    else
    {
        printf("%d is a Composite Number\n", num);
    }
    printf("Thank you");
    getchar();
    getchar();
}
