#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int k, i, e, l, m;
    char list[k][64];
    char *addr[k];
    char **list1;
    char **list2;
    do
    {
    do
    {
        printf("Enter amount of strings(it should be bigger than 1 and less than 64)\n");
        m = scanf("%d", &k);
        fflush(stdin);
        if (m != 1 || k <= 1 || k > 64)
        {
            printf("Error\n");
        }
    }
    while(m != 1 || k <= 1 || k > 64);
    for(i = 0; i < k; i++)
    {
    printf("Enter your symbols(max amount of symbols = 63)\n");
    fgets(list[i], 64, stdin);
    fflush(stdin);
    addr[i] = list[i];
    }
    
    for(int c = 0; c < (k - 1); c++)
    {
        for(int d = c + 1; d < k; d++)
        {
            char *d;
            char *e;
            char *c;
            c = *list1;
            d = *list2;
            if(strcmp(c, d) >=0)
            {
            e = *list1;
            *list1 = *list2;
            *list2 = e;
            }
        }
    }

        int a = 0;
        int b = 0;
        int n = (k - 1);
        printf("Press 1 to from MIN to MAX\nPress 2 to from MAX to MIN\n");
        int ch = getch();
        switch(ch)
        {
            case '1':
            {
                while(a <= k-1)
                {
                    printf("string %d = %s\n", a, addr[b]);
                    a++;
                    b++;
                }
            }
            break;
            case '2':
                {
                    while(a <= k-1)
                    {
                        printf("string %d = %s\n", a, addr[n]);
                        a++;
                        n--;
                    }
                }
                break;
            default :
                {
                    printf("You pressed not 1 or 2\n");
                }
        }
    printf("Press any key to continue or ESC to exit\n");
    }
    while(getch() != 27);

    return 0;
}
