#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
void main(void)
{
    char ch;
    int k=0;
    printf("\n\nSelect any number from 1 to 100\n");
    delay(2500);
    printf("\nNow wait and see the magic ........\n\n");
    delay(2000);
    printf("There will be seven cards shown to you\nJust tell in which cards your number is present\n");
    printf("Press y if present and n if not present");
    delay(2800);
    printf("\n\nFirst card is ...");
    printf("\n1  3  5  7  9  11\n13 15 17 19 21 23\n25 27 29 31 33 35\n37 39 41 43 45 47\n49 51 53 55 57 59\n61 63 65 67 69 71\n73 75 77 79 81 83\n85 87 89 91 93 95\n97 99 ");
    printf("\nY/N\n");
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        k+=1;
    fflush(stdin);
    printf("\nSecond card is ...");
    printf("\n2  3  6  7  10 11\n14 15 18 19 22 23\n26 27 30 31 34 35\n38 39 42 43 46 47\n50 51 54 55 58 59\n62 63 66 67 70 71\n74 75 78 79 82 83\n86 87 90 91 94 95\n98 99 ");
    printf("\nY/N\n");
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        k+=2;
    fflush(stdin);
    printf("\nThird card is ...");
    printf("\n4  5  6  7  12 13\n14 15 20 21 22 23\n28 29 30 31 36 37\n38 39 44 45 46 47\n52 53 54 55 60 61\n62 63 68 69 70 71\n76 77 78 79 84 85\n86 87 92 93 94 95\n100 ");
    printf("\nY/N\n");
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        k+=4;
    fflush(stdin);
    printf("\nFourth card is ...");
    printf("\n8  9  10 11 12 13\n14 15 24 25 26 27\n28 29 30 31 40 41\n42 43 44 45 46 47\n56 57 58 59 60 61\n62 63 72 73 74 75\n76 77 78 79 88 89\n90 91 92 93 94 95 ");
    printf("\nY/N\n");
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        k+=8;
    fflush(stdin);
    printf("\nFifth card is ...");
    printf("\n16 17 18 19 20 21\n22 23 24 25 26 27\n28 29 30 31 48 49\n50 51 52 53 54 55\n56 57 58 59 60 61\n62 63 80 81 82 83\n84 85 86 87 88 89\n90 91 92 93 94 95 ");
    printf("\nY/N\n");
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        k+=16;
    fflush(stdin);
    printf("\nSixth card is ...");
    printf("\n32 33 34 35 36 37\n38 39 40 41 42 43\n44 45 46 47 48 49\n50 51 52 53 54 55\n56 57 58 59 60 61\n62 63 96 97 98 99\n100 ");
    printf("\nY/N\n");
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        k+=32;
    fflush(stdin);
    printf("\nSeventh card is ...");
    printf("\n64 65 66 67 68 69\n70 71 72 73 74 75\n76 77 78 79 80 81\n82 83 84 85 86 87\n88 89 90 91 92 93\n94 95 96 97 98 99\n100 ");
    printf("\nY/N\n");
    scanf("\n%c",&ch);
    if(ch=='y'||ch=='Y')
        k+=64;
    printf("\nYour number is ....\n");
    delay(2500);
    printf("%d",k);
    delay(3000);
    fflush(stdin);
    printf("\n\n\nWould you like to do it once again\n");
    delay(2000);
    printf("\nPress y if yes and n if no\n");
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        main();
}
void delay(int x)
{
    int i,j;
    for(i=1;i<=(x*20);i++)
        for(j=1;j<=(x*20);j++);
}
