#include <stdio.h>
#include <stdlib.h>
int nor = 0, nob = 0, nobu = 0, count = 0, amount = 0;
int menu();
void show();
void delete();
void riksha();
void bicycle();
void bus();
int main()
{
    printf("----------well come in parking managment area-------------");
    while (1)
    {

        switch (menu())
        {
        case 1:
            riksha();
            break;
        case 2:
            bicycle();
            break;
        case 3:
            bus();
            break;
        case 4:
            show();
            break;
        case 5:
            delete ();
            break;
        case 6:
            exit(0);
        default:
            printf("enter valide no\n");
        }
    }
}
void delete()
{
    nor = 0;
    nob = 0;
    nobu = 0;
    count = 0;
    amount = 0;
}
void show()
{
    printf("\nTotal no if bus is =%d", nobu);
    printf("\nTotal no if bicycle is =%d", nob);
    printf("\nTotal no if riksha is =%d", nor);
    printf("\nTotal amount is =%d", amount);
    printf("\nTotal entry is =%d", count);
}
int menu()
{
    int ch;
    printf("\n1. enter for riksha");
    printf("\n 2. enter for bicycle");
    printf("\n 3. enter for bus");
    printf("\n 4. for show details");
    printf("\n 5. foe delete");
    printf("\n 6. exit");
    printf("chouse any number.=\t");
    scanf("%d", &ch);
    return (ch);
}
void riksha()
{
    printf("\nEntry successfull");
    nor++;
    amount += 50;
    count++;
}
void bicycle()
{
    printf("\nEntry successfull");
    nob++;
    amount += 20;
    count++;
}
void bus()
{
    printf("\nEntry successfull");
    nobu++;
    amount += 100;
    count++;
}

