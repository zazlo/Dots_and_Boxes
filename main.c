#include <stdio.h>
#include<windows.h>
#include<string.h>
#include <conio.h>
#include<math.h>
#include <time.h>
#include "game2x2.h"
#include "menu.h"
int selection_main_menu=1;
int selection_level_menu=1;
int selection_vs_menu=1;


int main(){
    /*welcome();*/
    for(i=0;i<+60;i++){
   for(j=0;j<10;j++){
        undo[i][j] = 0;
        }
    }
    mainmenu:
    box(4);
    selection_main_menu=main_menu(); //selection is the variable that contains the player's choice from the main menu
    //return default colour
    reset();

    switch(selection_main_menu)
    {

        case 1:  //case that player choice [1]start game
             system("cls");
            // create a frame contains 2 rows (choices)
            box(2);
            selection_level_menu= level_menu();

                    switch(selection_level_menu){
                         case 1 : // begginer mode (2x2)  if he choose 1
                                    system("cls");
                                    reset();
                                    box(2);
                                    selection_vs_menu = vs_menu();
                                    switch(selection_vs_menu){
                                        case 1:
                                            system("cls");
                                            game_loop_vs_AI(2,3);
                                        break;
                                        case 2:
                                            system("cls");
                                            game_loop_vs_player(2,0);// the zero for start new game
                                        break;

                                    }//end of selection3  2x2
                         break;//end of  2x2

                        case 2 :// Expert mode (5x5)  if he choose 2
                                    system("cls");
                                    reset();
                                     box(2);
                                    selection_vs_menu = vs_menu();
                                    switch(selection_vs_menu){
                                        case 1:
                                            system("cls");
                                            game_loop_vs_AI(5,3);
                                        break;
                                        case 2:
                                            system("cls");
                                            game_loop_vs_player(5,0);// the zero for start new game
                                        break;

                                    }

                          break;
                    }//end of selection2
            break;//break for case 1 in main menu start game

        case 2:  //case that player choice [2]load a previous game
            system("cls");purple();
            gotoxy(1,11);printf("Enter [1]load first file....[2]load second file....[3]load third file :");reset();
            filenumberload=scan_valid_integer(3,-7);
            system("cls");
            loading();
        printf("that is the second case");
        break;
        case 3: //the case that the player choice top scorers

            /*
            topscore_names_scores();

            gotoxy(1,10);
            */
            system("cls");
            gotoxy(0,1);
            topscore_names_scores();
            printf("Enter 1 for the main menu:");
            int n1;
             n1=scan_valid_integer(1,2);
             if(n1==1){system("cls");goto mainmenu;}

            topscore_names_scores();
        break;
        case 4: //the case that the player choice [4]exit
            exit(-1);
          break;


    }
    return 0;
}

