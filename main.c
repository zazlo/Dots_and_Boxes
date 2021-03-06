#include <stdio.h>
#include<windows.h>
#include<string.h>
#include <conio.h>
#include<math.h>
#include <time.h>
#include "game_loop_and_AI.h"
#include "menu.h"
#include "save_load_topscores.h"
int selection_main_menu=1;
int selection_level_menu=1;
int selection_vs_menu=1;



int main(){

    mainmenu:
    reset();
    reset_moves();
    undo_index=1;
    redo_index=1;
    for(i=0;i<+60;i++){
       for(j=0;j<10;j++){
        undo[i][j] = 0;
        }
    }
    system("cls");
    box(4);
    selection_main_menu=main_menu(); //selection is the variable that contains the player's choice from the main menu
    //return default colour
    reset();
        system("cls");
    switch(selection_main_menu)
    {

        case 1:  //case that player choice [1]start game
             system("cls");
            // create a frame contains 2 rows (choices)
            box(2);
            selection_level_menu= level_menu();

                    switch(selection_level_menu){
                         case 1 : // begginer mode (2x2)  if he choose 1
                                    reset();
                                    box(2);
                                    selection_vs_menu = vs_menu();
                                    switch(selection_vs_menu){
                                        case 1:
                                            system("cls");
                                            game_loop_vs_AI(2,3);
                                             if(aftergamechoice==1)goto mainmenu;
                                            else if(aftergamechoice==2)goto topScorers;
                                        break;
                                        case 2:
                                            system("cls");
                                            game_loop_vs_player(2,0);// the zero for start new game
                                            if(aftergamechoice==1){
                                                goto mainmenu;
                                                }
                                            else if(aftergamechoice==2){
                                                goto topScorers;
                                                }
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
                                            if(aftergamechoice==1)goto mainmenu;
                                            else if(aftergamechoice==2)goto topScorers;
                                        break;
                                        case 2:
                                            system("cls");
                                            game_loop_vs_player(5,0);// the zero for start new game
                                            if(aftergamechoice==1)goto mainmenu;
                                            else if(aftergamechoice==2)goto topScorers;
                                        break;

                                    }

                          break;
                    }//end of selection2
            break;//break for case 1 in main menu start game

        case 2:  //case that player choice [2]load a previous game
            loading:
            gotoxy(25,5);
            red();
            printf("/*loading*/");
            cyan();
            gotoxy(1,11);printf("Enter [1]load first file....[2]load second file....[3]load third file :");reset();
            filenumberload=scan_valid_integer(3,11,0);
            system("cls");aftergamechoice=0;
            loading();
            if(aftergamechoice==1)goto mainmenu;
            else if(aftergamechoice==2)goto topScorers;
            if(backing_in_load==1){system("cls");goto mainmenu;}
            else if(backing_in_load==2){system("cls");goto loading;}
        break;
        case 3: //the case that the player choice top scorers
            topScorers:
            gotoxy(0,1);
            topscore_names_scores();
            printf("Enter 1 for the main menu:");
            int n1;
             n1=scan_valid_integer(1,2,0);
             if(n1==1){system("cls");goto mainmenu;}

            topscore_names_scores();
        break;
        case 4: //the case that the player choice [4]exit
            exit(-1);

          break;


    }
    return 0;
}



