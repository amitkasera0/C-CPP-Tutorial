#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int genereterandomnumber(int n)
{
    srand(time(NULL)); // sran takes seed as an input and is define in stdlib.h
    return rand() % n;
}
int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else if (c2 == 'r' && c1 == 's')
    {
        return 0;
    }
    if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else if (c2 == 'p' && c1 == 'r')
    {
        return 0;
    }
    if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else if (c2 == 's' && c1 == 'p')
    {
        return 0;
    }
}
int main()
{
    int playerscore = 0, compscore = 0, temp;
    int playerchar, compchar;
    char dict[] = {'r', 'p', 's'};

    printf("welcome to rock paper scissor");
    for (int i = 0; i < 3; i++)
    {
        //players turn
        printf("\nplayer's turn ");
        printf("\nEnter 1 for rock , 2 for paper and 3 for scissor = ");
        scanf("%d", &temp);
        playerchar = dict[temp - 1];
        printf("you chose %c\n\n",playerchar);
        //computer's turn
        printf("\ncomputer's turn ");
        printf("\nEnter 1 for rock , 2 for paper and 3 for scissor");
        temp = genereterandomnumber(3) + 1;
        compchar = dict[temp - 1];
        printf("\ncomputer's chose %c\n\n",compchar);
    
    if (greater(compchar, playerchar) == 1)
    {
        compscore += 1;
        printf("cpu got its!\n\n");
    } 
    else if (greater(compchar, playerchar) == -1)
    {
        printf("its a draw!\n\n");
    }
    else
    {
        playerscore += 1;
        printf("you got its!\n\n");
    }
        printf("YOU:%d\nCPU:%d \n\n",playerscore,compscore);
    }
    if(playerscore>compscore){
        printf("you win!");
    }
    else if(playerscore<compscore){
        printf("cpu win!");
    }
    else{
        printf("draw!");
    }
    return 0;
}