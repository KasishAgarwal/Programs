#include<stdio.h>
void d_b();
void d_o();
void d_h();
void b_d();
void o_d();
void h_d();
void ini();
int i, j, k, d,f, c = 0, ar[10], out[10], x = 0, a = 1,n, no = 0;

int main() 
{
    int choice, flag;
    flag = 0;
    char ch;
    do
    {
        ini();
        c = 0;
        x = 0;
        a = 1;
        no = 0;
        printf("...........MENU..........\n\n");
        printf("1.Decimal to binary .\n");
        printf("2.Decimal to octal.\n");
        printf("3.Decimal to hexadecimal.\n");
        printf("4.Binary to decimal.\n");
        printf("5.Octal to decimal.\n");
        printf("6.Hexadecimal to decimal.\n");
        printf("999.Exit.\n");
        printf("\nEnter your choice.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            d_b();
            break;
        case 2:
            d_o();
            break;
        case 3:
            d_h();
            break;
        case 4:
            b_d();
            break;
        case 5:
            o_d();
            break;
        case 6:
            h_d();
            break;
        case 999:
            printf("EXIT\n");
            flag = 1;
            break;
        default:
            printf("\nWRONG CHOICE.\n");
        }
        printf("\n\n\nWant to enter more(y/n)???\n");
        scanf("%c", &ch);
        scanf("%c", &ch);
    }
    while (ch == 'y' && flag == 0);
    return 0;
}

void d_b()
{
    printf("\nEnter the no. to be converted.\n");
    scanf("%d", &n);
    while (n > 0)
    {
        for (i = 0; i < 10; i++)
        {
            if (n < 2)
            {
                d = n;
            }
            else
            {
                d = n % 2;
            }
            ar[i] = d;
            n = (n - d) / 2;
            c = c + 1;
        }
    }
    int p = 0;
    for (j = c - 1; j >= 0; j--)
    {
        out[p] = ar[j];
        p = p + 1;
    }
    printf("\nThe binary value is:\n");
    for (k = 0; k < c; k++)
    {
        printf("%d", out[k]);
    }
    c = 0;

}

void d_o()
{
    printf("\nEnter the no. to be converted.\n");
    scanf("%d", &n);
    while (n > 0)
    {
        for (i = 0; i < 10; i++)
        {
            if (n < 8)
            {
                d = n;
            }
            else
            {
                d = n % 8;
            }
            ar[i] = d;
            n = (n - d) / 8;
            c = c + 1;
        }
    }
    int p = 0;
    for (j = c - 1; j >= 0; j--)
    {
        out[p] = ar[j];
        p = p + 1;
    }
    printf("\nThe octal value is:\n");
    for (k = 0; k < c; k++)
    {
        printf("%d", out[k]);
    }
    c = 0;
}

void d_h()
{
    printf("\nEnter the no. to be converted.\n");
    scanf("%d", &n);
    while (n > 0)
    {
        for (i = 0; i < 10; i++)
        {
            if (n < 16)
            {
                d = n;

            }
            else
            {
                d = n % 16;
            }
            ar[i] = d;
            n = (n - d) / 16;
            c = c + 1;
        }
    }
    int p = 0;
    for (j = c - 1; j >= 0; j--)
    {
        out[p] = ar[j];
        p = p + 1;
    }
    printf("\nThe hexadecimal value is:\n");
    for (k = 0; k < c; k++)
    {
            if( out[k]==10)
            { 
            printf("A");
            }
            else if( out[k]==11)
            {
            printf("B");
            }
            else if( out[k]==12)
            {
            printf("C");
            }
            else if( out[k]==13)
            {
            printf("D");
             }
            else if( out[k]==14)
            {
            printf("E");
        
            }
                else if( out[k]==15)
            {
            printf("F");
            }
            else
            {
             printf("%d", out[k]);
            }
    }
    c = 0;


}

void b_d()
{
    printf("\nEnter the no. to be converted:\n(in 0 1 format)\n");
    scanf("%d", &n);
    while (n > 0)
    {
        d = n % 10;
        if (x == 0)
        {
            a = 1;
        }
        else
        {
            for (i = 1; i <= x; i++)
            {
                a = a * 2;
            }
        }
        x = x + 1;
        no = no + (d * a);
        n = n / 10;
        a = 1;
    }
    printf("\nThe decimal value is:%d\n", no);

}

void o_d()
{
    printf("\nEnter the no. to be converted:\n");
    scanf("%d", &n);
    while (n > 0)
    {
        d = n % 10;
        if (x == 0)
        {
            a = 1;
        }
        else
        {
            for (i = 1; i <= x; i++)
            {
                a = a * 8;
            }
        }
        x = x + 1;
        no = no + (d * a);
        n = n / 10;
        a = 1;
    }
    printf("\nThe decimal value is:%d\n", no);

}

void h_d()
{    
    printf("\nEnter the no. of digits:");
    scanf("%d", &f);
    printf("\nEnter the digit as:\nA=10\nB=11\nC=12\nD=13\nE=14\nF=15\n\nEnter the no. to be converted (in array format):\n");
    for (i = 0; i < f; i++)
    {
    scanf("%d", &ar[i]);
    }
    for (i = f-1; i >= 0; i--)
    {
        if (x == 0)
        {
            a = 1;
        }
        else
        {
            for (j = 1; j <= x; j++)
            {
                a = a * 16;
            }
        }
        x = x + 1;
        no = no + (ar[i] * a);
        a = 1;
    }
    printf("\nThe decimal value is:%d\n", no);

}

void ini()
{
    for (i = 0; i < 10; i++)
    {
        ar[i] = 0;
        out[i] = 0;
    }
}
