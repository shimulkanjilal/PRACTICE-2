#include<stdio.h>
int main ()
{
    int a;
    printf ("Enter a number between 1-100\n");
    scanf ("d, &a");
    if (a>0 && a <=40)
    {
        printf ("First block!");
        printf ("Value of a is = %d\n", a);

    }
    else if (a>40 && a <=80)
    {
        printf ("Third Block!");
        printf ("Value of a is = %d\n", a);
        }
        else if (a >80 && a <=100)
        {
            printf ("Third Block!");
            printf ("Value of is a = %d\n",a);
        }
        else
        {
            printf("Fourth Block! not between 1-100");
            printf ("value of is a =d\n",a);
        }
        return 0;

}
