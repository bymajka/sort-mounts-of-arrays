#include <stdio.h>
#include <conio.h>
#include <string.h>
void sort(char**, char**);
int main()
{
    int k,i, j, l, ck;
    char list[k][64];
    char *addr[k];
    do
    {
    do
    {
        printf("Enter amount of strings(it should be bigger than 1 max 64)\n");
        ck = scanf("%d", &k);
        fflush(stdin);
        if (ck != 1 || k <= 1 || k > 64)
        {
            printf("Error\n");
        }
    }
    while(ck != 1 || k <= 1 || k > 64);
    for(i = 0; i < k; i++)
    {
    printf("Enter your symbols(max amount of symbols = 63)\n");
    fgets(list[i], 64, stdin);
    fflush(stdin);
    addr[i] = list[i];
    }
    for(int a = 0; a < (k - 1); a++)
    {
        for(int b = a + 1; b < k; b++)
        {
                sort(&addr[a], &addr[b]);
        }
    }
        j = 0;
        l = 0;
        int n = (k - 1);
        printf("Press 1 to from MIN to MAX\nPress 2 to from MAX to MIN\n");
        int ch = getch();
        switch(ch)
        {
            case '1':
            {
                while(j <= k-1)
                {
                    printf("string %d = %s\n", j, addr[l]);
                    j++;
                    l++;
                }
            }
            break;
            case '2':
                {
                    while(j <= k-1)
                    {
                        printf("string %d = %s\n", j, addr[n]);
                        j++;
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
void sort(char **list1, char **list2)
{
    char *b;
    char *a;
    char *c;
    a = *list1;
    b = *list2;
    if(strlen(a) > strlen(b))
    {
    c = *list1;
    *list1 = *list2;
    *list2 = c;
    }
}
