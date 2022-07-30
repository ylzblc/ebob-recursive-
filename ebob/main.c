#include <stdio.h>
#include <stdlib.h>

int ebob(int x, int y)
{
    if(y != 0)
        return ebob(y, x%y);
    else
        return x;
}

int main(void)
{
    int x, y;

    printf("Iki pozitif tamsayi giriniz: ");
    scanf("%d %d", &x, &y);

    printf("EBOB: %d", ebob(x, y));
    return 0;
}
