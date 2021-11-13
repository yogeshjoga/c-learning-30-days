/* This is the TIC TOC TOE GAME 25 squares, ========== Developed by JOGA YOGESH ===============
* with realworld game.
* Any way lets start 
*/
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#pragma GCC diagnostic ignored "-Wmultichar"


void GameBoard();
int winner;
// multi char error we will do as possible it 
    char square[26] = {'0','1','2','3','4','5','6','7','8','9'}//10','11','12','13','14','15','16','17','18','19','20','21','22','23','24','25'};
//char square[27] = "0","11","12";
int main(){
    int player = 1, i, choice;
    char symbol;
    do{
        GameBoard();
        player = (player % 2) ? 1: 2;
        printf("player %d, enter ther choice :", player);
        scanf("%d", &choice);
        printf("Set Your Symbole");
        symbol = (player ==1) ? 'X' : 'O';
        if(choice == 1 && square[1] == '1')
          square[1] = symbol;
            else if (choice ==2 && square[2] == '2')
               square[2] = symbol;
            else if (choice ==3 && square[3] == '3')
               square[3] = symbol;
            else if (choice ==4 && square[4] == '4')
               square[4] = symbol;
            else if (choice ==5 && square[5] == '5')
               square[5] = symbol;
            else if (choice ==6 && square[6] == '6')
               square[6] = symbol;
            else if (choice ==7 && square[7] == '7')
               square[7] = symbol;
            else if (choice ==8 && square[8] == '8')
               square[8] = symbol;
            else if (choice ==9 && square[9] == '9')
               square[9] = symbol;
            else if (choice ==10 && square[10] == '10')
               square[10] = symbol;
            else if (choice ==11 && square[11] == '11')
               square[11] = symbol;
            else if (choice ==12 && square[12] == '12')
               square[12] = symbol;
            else if (choice ==13 && square[13] == '13')
               square[13] = symbol;
            else if (choice ==14 && square[14] == '14')
               square[14] = symbol;
            else if (choice ==15 && square[15] == '15')
               square[15] = symbol;
            else if (choice ==16 && square[16] == '16')
               square[16] = symbol;
            else if (choice ==17 && square[17] == '17')
               square[17] = symbol;
            else if (choice ==18 && square[18] == '18')
               square[18] = symbol;
            else if (choice ==19 && square[19] == '19')
               square[19] = symbol;
            else if (choice ==20 && square[20] == '20')
               square[20] = symbol;
            else if (choice ==21 && square[21] == '21')
               square[21] = symbol;
            else if (choice ==22 && square[22] == '22')
               square[22] = symbol;
            else if (choice ==23 && square[23] == '23')
               square[23] = symbol;
            else if (choice ==24 && square[24] == '24')
               square[24] = symbol;
            else if (choice ==25 && square[25] == '25')
               square[25] = symbol;
   }

 else{
            printf("Invalid option !");
            player--;
            getch();
        }
        i = winner();
        player++;
    
    }

    while(i == -1);
    GameBoard();
   
    if (i ==1){
        printf("==>Playr %d won", --player);
      }
    else{
        printf("==>Game is Draw");
    }
    getch();
    return 0;
}


int checkWin(){
    //horizontal validation 
    if (square[1] == square[2] && square[3] == square[4] && square[4] == square[5])
        return 1;
    else if (square[6] == square[7] && square[8] == square[9] && square[9] == square[10])
        return 1;
    else if (square[11] == square[12] && square[13] == square[14] && square[14] == square[15])
        return 1;
    else if (square[16] == square[17] && square[18] == square[19] && square[19] == square[20])
        return 1;
    else if (square[21] == square[22] && square[23] == square[24] && square[24] == square[25])
        return 1;
        //start the vertical validation
    else if (square[1] == square[6] && square[11] == square[16] && square[16] == square[21])
        return 1;
    else if (square[2] == square[7] && square[12] == square[17] && square[17] == square[22])
        return 1;
    else if (square[3] == square[8] && square[13] == square[18] && square[18] == square[20])
        return 1;
    else if (square[4] == square[9] && square[14] == square[19] && square[19] == square[25])
        return 1;
    else if (square[5] == square[10] && square[15] == square[20] && square[20] == square[25])
        return 1;
    
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6'  && square[7] != '7' && square[8] != '8' && square[9] != '9' && square[10] != '10' && square[11] != '11' && square[12] != '12' && square[13] != '13' && square[14] != '14' && square[15] != '15' && square[16] != '16' && square[17] != '17' && square[18] != '18' && square[19] != '19'  && square[20] != '20' && square[21] != '21' && square[22] != '22' && square[23] != '23' && square[24] != '24' && square[25] != '25')                                                                                                                        
        return 0;
    else 
        return -1;
                                                                                                                                                                                                                                                                                                                                                                    
} 

 void GameBoard(){
    system("cls");
    char player1Name[20];
    char player2Name[20];
    printf("\n\n\t\t ========= Tic Tac Toe by YOGESH JOGA =========\n\n");
    printf("Welcome the TIC TAC TOE Game in 25 squares\n\n");
    printf("Enter the name Without space\n\n");
    printf("Enter player 1 Name :", &player1Name);
    printf("Enter player 2 Name :", &player2Name);
    //scanf("") is blance so next week plan u
    printf("Guide : Take the SYMBOLE, only speical symobles only like Eg: @ # $ %% & * \n\n ");
    printf("Enter the name Without space");
    printf("Player1 (X) - Player2 (0) \n\n\n");
    printf("        |       |       |       |         \n");
    printf("    %c   |   %c   |     %c  |   %c   |   %c   |\n", square[1], square[2], square[3], square[4], square[5] );
    printf("________|_______|_______|_______|_______\\n");
    printf("        |       |       |       |       \n");
    printf("    %c   |   %c   |     %c  |   %c   |   %c   |\n", square[6], square[7], square[8], square[9], square[10] );
    printf("________|_______|_______|_______|_______\\n");
    printf("        |       |       |       |       \n");
    printf("    %c   |   %c   |     %c  |   %c   |   %c   |\n", square[11], square[12], square[13], square[14], square[15] );
    printf("________|_______|_______|_______|_______\\n");
    printf("        |       |       |       |       \n");
    printf("    %c   |   %c   |     %c  |   %c   |   %c   |\n", square[16], square[17], square[18], square[19], square[20] );
    printf("________|_______|_______|_______|_______\\n");
    printf("        |       |       |       |       \n");
    printf("    %c   |   %c   |     %c  |   %c   |   %c   |\n", square[21], square[22], square[23], square[24], square[25] );
    printf("        |       |       |       |       \n");

}

// user 





