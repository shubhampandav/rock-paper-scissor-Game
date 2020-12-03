//Rock Paper Scissor Game:

//How To play
/*
select 0 for Rock 
select 1 for paper 
select 2 for Scissor 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    printf("---------------------------------------------------\n");
    printf("|                                                  |\n");
    printf("| --->> WELCOME TO ROCK PAPER SCISSOR GAME <<---   |\n");
    printf("|                                                  |\n");
    printf("|                                                  |\n");
    printf("---------------------------------------------------\n");

            printf("-----------------------------------\n");
            printf("|   --->> HOW TO PLAY <<---       |\n");
            printf("|   --->> Enter 0 for Rock        |\n");
            printf("|   --->> Enter 1 for Paper       |\n");
            printf("|   --->> Enter 2 for Scissor     |\n");
            printf("-----------------------------------\n");



// this is for generating random number 

    srand(time(NULL));
   
    int rnumber = rand() % 3;

    int choice;

    printf("Enter you choice:");
    scanf("%d", &choice);
    
  
    printf("---------------------------------------------\n");
    switch (rnumber)
    {
    case 0:
        printf("--->Pc select Rock:\n");
        break;

    case 1:
        printf("--->Pc select paper:\n");
        break;

    case 2:
        printf("--->Pc select scissor:\n");
        break;

    default:

        break;
    }
   

    switch (choice)
    {
    case 0:
        printf("--->you select Rock:\n");
        break;

    case 1:
        printf("--->you select paper:\n");
        break;
    case 2:
        printf("--->you select scissor:\n");
        break;
    default:
        if (choice >= 2)
             printf("PC select correct choice, But \nyou select Incorrect choice\n");
        {    printf("please Select Correct choice:\n And Run Again\n");

            printf("-----------------------------------\n");
            printf("|   --->> HOW TO PLAY <<---       |\n");
            printf("|   --->> Enter 0 for Rock        |\n");
            printf("|   --->> Enter 1 for Paper       |\n");
            printf("|   --->> Enter 2 for Scissor     |\n");
            printf("-----------------------------------\n");
         
        }

        break;
    }

    // printf("-----------------*-------------------\n");
    if (rnumber == 0 && choice == 2)
    {
      printf("---------------\n");
      printf("|    PC Win    |\n");
      printf("---------------\n");
    }
    else if (rnumber == 2 && choice == 1)
    {
      
      printf("---------------\n");
      printf("|    PC Win    |\n");
      printf("---------------\n");
    }
    else if (rnumber == 1 && choice == 0)
    {
      
      printf("---------------\n");
      printf("|    PC Win    |\n");
      printf("---------------\n");
    }

    if (rnumber == 2 && choice == 0)
    {
       
      printf("------------------------------\n");
      printf("|  Congratulation, You Win     |\n");
      printf("------------------------------\n");
    }

    else if (rnumber == 1 && choice == 2)
    {
      printf("------------------------------\n");
      printf("|  Congratulation, You Win     |\n");
      printf("------------------------------\n");
    }
    else if (rnumber == 0 && choice == 1)
    {
      printf("------------------------------\n");
      printf("|  Congratulation, You Win     |\n");
      printf("------------------------------\n");
  
    }

    else if (rnumber == 0 && choice == 0)
    {
      printf("------------------\n");
      printf("|    This is tie  |\n");
      printf("------------------\n");
    }
    else if (rnumber == 1 && choice == 1)
    {
      printf("------------------\n");
      printf("|    This is tie  |\n");
      printf("------------------\n");
    }
    else if (rnumber == 2 && choice == 2)
    {
      printf("------------------\n");
      printf("|    This is tie  |\n");
      printf("------------------\n");
    }

    printf("                                   \n");
    // printf("-----------------*-------------------\n");
    printf("Thanks,for playing\n Have Nice Day" );
    return 0;
}