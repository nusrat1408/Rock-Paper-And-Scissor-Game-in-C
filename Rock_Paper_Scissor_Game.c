#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void HeadMessage();
void Game();

int main ()
{
    system("cls");
    HeadMessage();
    Game();
    
    return 0;
}

void HeadMessage()
{
    printf("\n\n\t\t\tWelcome To Play Rock Paper & Scissor\t\t\n\n");
}
void Game()
{
    int choice;
    printf("\nChoose one:\n");
    printf("\n1.Rock\n2.Paper\n3.Scissor\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    time_t t1;
    int flag;
    srand((unsigned)time(&t1));
    int random = rand() % 100 + 1;

    if (random == 1)
    {
        printf("\nThe Bot chose rock!!");
        flag = 1;
    }
    else if (random % 2 == 0)
    {
        printf("\nThe Bot choose paper!!");
        flag = 2;
    }
    else if (random % 2 != 0)
    {
        printf("\nThe Bot chose scissor!!\n");
        flag = 3;
    }
    if (choice == flag)
    {
        printf("\nThe match is draw!\n\n");
        Game();
    }
    else if (choice < flag)
    {
        printf("\nThe Bot wins!!\n\n");
        Game();
    }
    else if (choice > flag)
    {                                     
        printf("\nYou win. Bingo!!\n\n");
        Game();
    }
}
