#ifndef MENU
#define MENU
#include <stdio.h>
#include <windows.h>
#include<math.h>
#include<time.h>
//the colors
/*
void welcome(void){
int counter5;

purple();

for (int counter5=0 ; counter5 <10;counter5++){
printf("\n\n\n\n\n\n");
printf(" __          __  _\n");
printf(" \\ \\        / / | |\n");
printf("  \\ \\  /\\  / /__| | ___ ___  _ __ ___   ___\n");
printf("   \\ \\/  \\/ / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\\n");
printf("    \\  /\\  /  __/ | (_| (_) | | | | | |  __/ \n");
printf("  _  \\/  \\/ \\___|_|\\___\\___/|_| |_| |_|\\___|        _   ____ \n");
printf(" | |        |  __ \\      | |                       | | |  _ \\ \n");
printf(" | |_ ___   | |  | | ___ | |_ ___    __ _ _ __   __| | | |_) | _____  _____  ___ \n");
printf(" | __/ _ \\  | |  | |/ _ \\| __/ __|  / _` | '_ \\ / _` | |  _ < / _ \\ \\/ / _ \\/ __|\n");
printf(" | || (_) | | |__| | (_) | |_\\__ \\ | (_| | | | | (_| | | |_) | (_) >  <  __/\\__ \\\n");
printf("  \\\__\\___/  |_____/ \\___/ \\__|___/  \\__,_|_| |_|\\__,_| |____/ \\___/_/\\_\\___||___/\n");

system("cls");
}

reset();


}
*/
void red () {
  system("");
  printf("\033[1;31m");
}

void cyan (void) {
      system("");
  printf("\033[0;36m");
}

void purple(void) {
      system("");
    printf("\033[0;35m");
}

void reset (void) {
    system("");
  printf("\033[0m");
}


void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

//the code of the starting of the main menu

void box(int a)
{
    int i,j;
    //start of box
    gotoxy(39,10);
    printf("%c",201);
    for(i=1;i<=35;i++)printf("%c",205);
    printf("%c",187);

    //spaces
    for(i=0;i<a;i++){
    gotoxy(39,11+i);
    printf("%c",186);
    for(j=1;j<=35;j++)printf(" ");
    printf("%c",186);
    }
    //the end of the box
    gotoxy(39,11+a);
    printf("%c",200);
    for(i=1;i<=35;i++)printf("%c",205);
    printf("%c",188);
}

int main_menu(void)
{

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    int pos=1;
    char ch;


    do
    {
        SetConsoleTextAttribute(console,15);

        gotoxy(40,11);printf("          [1]start game");
        gotoxy(40,12);printf("          [2]load game");
        gotoxy(40,13);printf("          [3]top scores");
        gotoxy(40,14);printf("          [4]exit");

        switch(pos)
        {
            case 1:SetConsoleTextAttribute(console,12);gotoxy(40,11);printf("          [1]start game");break;
            case 2:SetConsoleTextAttribute(console,12);gotoxy(40,12);printf("          [2]load game");break;
            case 3:SetConsoleTextAttribute(console,12);gotoxy(40,13);printf("          [3]top scores");break;
            case 4:SetConsoleTextAttribute(console,12);gotoxy(40,14);printf("          [4]exit");break;
        }
        ch=getch();
        if(ch==72)
        {
            pos--;
            if(pos==0)pos=4;
        }
        if(ch==80)
        {
            pos++;
            if(pos==5)pos=1;
        }

    }while(ch!=13);
    gotoxy(39,16);printf("please wait the terminal is killed");
    return pos;

}


int level_menu(void)
{

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    int pos=1;
    char ch;


    do
    {
        SetConsoleTextAttribute(console,15);

        gotoxy(40,11);printf("       [1]Beginner mode(2x2)");
        gotoxy(40,12);printf("       [2]Expert mode(5x5)");

        switch(pos)
        {
            case 1:SetConsoleTextAttribute(console,12);gotoxy(40,11);printf("       [1]Beginner mode(2x2)");break;
            case 2:SetConsoleTextAttribute(console,12);gotoxy(40,12);printf("       [2]Expert mode(5x5)");break;

        }
        ch=getch();
        if(ch==72)
        {
            pos--;
            if(pos==0)pos=2;
        }
        if(ch==80)
        {
            pos++;
            if(pos==3)pos=1;
        }

    }while(ch!=13);
    gotoxy(39,16);printf("please wait the terminal is killed");
    return pos;

}

//the menu of vs
int vs_menu(void)
{

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    int pos=1;
    char ch;


    do
    {
        SetConsoleTextAttribute(console,15);

        gotoxy(40,11);printf("       [1]Vs Computer");
        gotoxy(40,12);printf("       [2]Vs Player");

        switch(pos)
        {
            case 1:SetConsoleTextAttribute(console,12);gotoxy(40,11);printf("       [1]Vs Computer");break;
            case 2:SetConsoleTextAttribute(console,12);gotoxy(40,12);printf("       [2]Vs Player");break;

        }
        ch=getch();
        if(ch==72)
        {
            pos--;
            if(pos==0)pos=2;
        }
        if(ch==80)
        {
            pos++;
            if(pos==3)pos=1;
        }

    }while(ch!=13);
    gotoxy(39,16);
    return pos;

}

//game edit:

void game_box(void){
    int i,j;
    //start of box
    gotoxy(1,17);
    printf("%c",201);
    for(i=1;i<=5;i++)printf("%c",205);
    printf("%c",187);

    gotoxy(1,18);
    printf("%c",186);
    for(j=1;j<=5;j++)printf(" ");
    printf("%c",186);gotoxy(1,19);printf("%c",186);
    for(j=1;j<=5;j++)printf(" ");
    printf("%c",186);gotoxy(1,20);printf("%c",186);
    for(j=1;j<=5;j++)printf(" ");
    printf("%c",186);

    gotoxy(1,21);printf("%c",200);
    for(i=1;i<=5;i++)printf("%c",205);
    printf("%c",188);
}

int choice_menu(void)
{

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    int pos=1;
    char ch;


    do
    {
        SetConsoleTextAttribute(console,15);

        gotoxy(2,18);printf(" [1] ");
        gotoxy(2,19);printf(" [2] ");
        gotoxy(2,20);printf(" [3] ");
        switch(pos)
        {
            case 1:SetConsoleTextAttribute(console,12);gotoxy(2,18);printf(" [1] ");break;
            case 2:SetConsoleTextAttribute(console,12);gotoxy(2,19);printf(" [2] ");break;
            case 3:SetConsoleTextAttribute(console,12);gotoxy(2,20);printf(" [3] ");break;

        }
        ch=getch();
        if(ch==72)
        {
            pos--;
            if(pos==0)pos=3;
        }
        if(ch==80)
        {
            pos++;
            if(pos==4)pos=1;
        }

    }while(ch!=13);
    gotoxy(1,21);
    reset();
    return pos;


}
void saving(int size_game,int role){
        if(filenumber==1){
                 FILE *file1;
                file1=fopen("filegame1.txt","w");
                fn_save(size_game,role,file1);
        }
        else if(filenumber==2){
                    FILE *file2;
                    file2=fopen("filegame2.txt","w");
                    fn_save(size_game,role,file2);
        }
        else if(filenumber==3){
                    FILE *file3;
                    file3=fopen("filegame3.txt","w");
                    fn_save(size_game,role,file3);
        }
}

void fn_save(int size_game,int role,FILE *file){
 int e,q;
        fprintf(file,"%s",player1.player_name);fprintf(file,"\n");
        if(role==3||role==4||role ==5){
                fprintf(file,"computer");fprintf(file,"\n");}
        else
        {fprintf(file,"%s",player2.player_name);fprintf(file,"\n");}
        fprintf(file,"%d",player1.score);fprintf(file,"\n");
        fprintf(file,"%d",player2.score);fprintf(file,"\n");
        fprintf(file,"%d",player1.number_of_moves);fprintf(file,"\n");
        fprintf(file,"%d",player2.number_of_moves);fprintf(file,"\n");
        fprintf(file,"%d",Total_remaining);fprintf(file,"\n");
        fprintf(file,"%d",size_game);fprintf(file,"\n");
        fprintf(file,"%d",role);fprintf(file,"\n");

        for(q=0;q<2*size_game+1;q++){
            for(e=0;e<2*size_game+1;e++){
                fprintf(file,"%c",grid[q][e]);
            }
            fprintf(file,"\n");
        }

            fprintf(file,"\n");
        for(q=0;q<size_game;q++){
            for(e=0;e<size_game;e++){
                fprintf(file,"%d",score_4[q][e]);
                fprintf(file," ");
            }
        }

            fprintf(file,"\n");
         for(q=0;q<size_game;q++){
            for(e=0;e<size_game;e++){
                fprintf(file,"%c",score_4_name[q][e]);
            }
        }
        fclose(file);

}


void loading(void){
            if(filenumberload==1){
                 FILE *file1load;
                file1load=fopen("filegame1.txt","r");
                fn_load(file1load);
        }
        else if(filenumberload==2){
                    FILE *file2load;
                    file2load=fopen("filegame2.txt","r");
                    fn_load(file2load);
        }
        else if(filenumberload==3){
                    FILE *file3load;
                    file3load=fopen("filegame3.txt","r");
                    fn_load(file3load);
        }



}


void fn_load(FILE *fileload){
        int rule;
        int sizeload;

        fscanf(fileload,"%s",player1.player_name);fscanf(fileload,"\n");
        fscanf(fileload,"%s",player2.player_name);fscanf(fileload,"\n");
        fscanf(fileload,"%d",&player1.score);fscanf(fileload,"\n");
        fscanf(fileload,"%d",&player2.score);fscanf(fileload,"\n");
        fscanf(fileload,"%d",&player1.number_of_moves);fscanf(fileload,"\n");
        fscanf(fileload,"%d",&player2.number_of_moves);fscanf(fileload,"\n");
        fscanf(fileload,"%d",&Total_remaining);fscanf(fileload,"\n");
        fscanf(fileload,"%d",&sizeload);fscanf(fileload,"\n");
        fscanf(fileload,"%d",&rule);fscanf(fileload,"\n");
        int e,q;
        for(q=0;q<2*sizeload+1;q++){
            for(e=0;e<2*sizeload+1;e++){
                fscanf(fileload,"%c",&grid[q][e]);
            }
            fscanf(fileload,"\n");
        }fscanf(fileload,"\n");

        for(q=0;q<sizeload;q++){
            for(e=0;e<sizeload;e++){
                fscanf(fileload,"%d",&score_4[q][e]);
                fscanf(fileload," ");
            }
        }

         fscanf(fileload,"\n");
        for(q=0;q<sizeload;q++){
            for(e=0;e<sizeload;e++){
                fscanf(fileload,"%c",&score_4_name[q][e]);
            }
        }

    fclose(fileload);

    //printing grid
    drawing_grid(sizeload);
        for(q=0;q<2*sizeload+1;q++){
            for(e=0;e<2*sizeload+1;e++){
                        if(q%2==0){
                            if(grid[q][e]=='A'){red();gotoxy(2+2*e,3+q);printf("%c%c%c",205,205,205);reset();}
                            else if(grid[q][e]=='B'){cyan();gotoxy(2+2*e,3+q);printf("%c%c%c",205,205,205);reset();}
                        }
                        else {
                                    if(grid[q][e]=='A'){red();gotoxy(3+2*e,3+q);printf("%c",186);reset();}
                                    else if(grid[q][e]=='B'){cyan();gotoxy(3+2*e,3+q);printf("%c",186);reset();}

                        }
            }
        }

         for(q=0;q<sizeload;q++){
            for(e=0;e<sizeload;e++){
                if(score_4_name[q][e]=='A'){red();gotoxy((3+2)+4*e,(3+1)+2*q);printf("A");color_box(q,e);reset();}
                else if(score_4_name[q][e]=='B'){cyan();gotoxy((3+2)+4*e,(3+1)+2*q);printf("B");color_box(q,e);reset();}
            }
        }
delete_common(sizeload,'A');
delete_common(sizeload,'B');

if(rule==3 || rule==4 ||rule ==5)game_loop_vs_AI(sizeload,rule);
else game_loop_vs_player(sizeload,rule);
}


int scores_values[10];
char names_wvalues[10][100];
int position=-1;


void topscore_names_scores(void){
        HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);


        char n[100];
        int sc=0,i;
        FILE *name;
        FILE *score;
        name=fopen("top_names.txt","r");
        score=fopen("top_scores.txt","r");
        SetConsoleTextAttribute(console,11);
        system("cls");gotoxy(0,0);
        for(i=1;i<=10;i++){
                    fscanf(name,"%s",n);fscanf(name,"\n");
                    fscanf(score,"%d",&sc);fscanf(score,"\n");
                    printf("[%d] %s              with score : %d\n",i,n,sc);
        }
        SetConsoleTextAttribute(console,15);
        fclose(name);
        fclose(score);
}

void Ent_new_score(void){
    int j,i,news=10;


    FILE *name;
    FILE *score;
    int temp_score;
    char temp_name[100];
    name=fopen("top_names.txt","r");
    score=fopen("top_scores.txt","r");
    for(i=0;i<10;i++){
        fscanf(score,"%d",&scores_values[i]);fscanf(score,"\n");
        fscanf(name,"%s",names_wvalues[i]);fscanf(name,"\n");
    }
    fclose(name);
    fclose(score);
    /*
    for(i=0;i<10;i++){
            //review two dimensional array of names
        printf("%s",names_wvalues[i]);printf(" ");
        printf(": %d",scores_values[i]);printf("\n");

    }
*/
    name=fopen("top_names.txt","w");
    score=fopen("top_scores.txt","w");
    if(player1.score>player2.score){
                        for(j=0;j<10;j++){
                            if((strcmp(player1.player_name,names_wvalues[j]))==0){news=j;goto contin1;}
                        }
                        contin1:
                        if(news==10){
                                fn_edit_top(player1.player_name,player1.score);
                                for(i=0;i<10;i++){
                                fprintf(score,"%d",scores_values[i]);fprintf(score,"\n");
                                fprintf(name,"%s",names_wvalues[i]);fprintf(name,"\n");
                                }
                        }else if(news!=10){
                                //
                                if(scores_values[news]<player1.score)
                                {
                                    scores_values[news]=player1.score;
                                            for(i=news-1;i>=0;i--){
                                                if(scores_values[i+1]>scores_values[i]){
                                                        temp_score=scores_values[i+1];
                                                        scores_values[i+1]=scores_values[i];
                                                        scores_values[i]=temp_score;

                                                        strcpy(temp_name,names_wvalues[i+1]);
                                                        strcpy(names_wvalues[i+1],names_wvalues[i]);
                                                        strcpy(names_wvalues[i],temp_name);
                                                }
                                            }



                                            for(i=0;i<10;i++){
                                                fprintf(score,"%d",scores_values[i]);fprintf(score,"\n");
                                                fprintf(name,"%s",names_wvalues[i]);fprintf(name,"\n");
                                            }
                                }else if(scores_values[news]>=player1.score){
                                    for(i=0;i<10;i++){
                                                fprintf(score,"%d",scores_values[i]);fprintf(score,"\n");
                                                fprintf(name,"%s",names_wvalues[i]);fprintf(name,"\n");
                                    }

                                }

                        }


    }


    else if(player2.score>player1.score){




                    for(j=0;j<10;j++){
                            if((strcmp(player2.player_name,names_wvalues[j]))==0){news=j;goto contin2;}
                        }
                        contin2:
                        if(news==10){
                                fn_edit_top(player2.player_name,player2.score);
                                for(i=0;i<10;i++){
                                fprintf(score,"%d",scores_values[i]);fprintf(score,"\n");
                                fprintf(name,"%s",names_wvalues[i]);fprintf(name,"\n");
                                }
                        }else if(news!=10){
                                //
                                if(scores_values[news]<player2.score)
                                {
                                    scores_values[news]=player2.score;
                                            for(i=news-1;i>=0;i--){
                                                if(scores_values[i+1]>scores_values[i]){
                                                        temp_score=scores_values[i+1];
                                                        scores_values[i+1]=scores_values[i];
                                                        scores_values[i]=temp_score;

                                                        strcpy(temp_name,names_wvalues[i+1]);
                                                        strcpy(names_wvalues[i+1],names_wvalues[i]);
                                                        strcpy(names_wvalues[i],temp_name);
                                                }
                                            }



                                            for(i=0;i<10;i++){
                                                fprintf(score,"%d",scores_values[i]);fprintf(score,"\n");
                                                fprintf(name,"%s",names_wvalues[i]);fprintf(name,"\n");
                                            }
                                }else if(scores_values[news]>=player2.score){
                                    for(i=0;i<10;i++){
                                                fprintf(score,"%d",scores_values[i]);fprintf(score,"\n");
                                                fprintf(name,"%s",names_wvalues[i]);fprintf(name,"\n");
                                    }

                                }

                        }





    /*    fn_edit_top(player2.player_name,ps2);
        for(i=0;i<10;i++){
            //review two dimensional array of names
        fprintf(score,"%d",scores_values[i]);fprintf(score,"\n");
        fprintf(name,"%s",names_wvalues[i]);fprintf(name,"\n");
    }
*/
    }
fclose(name);
fclose(score);

}



void fn_edit_top(char req_name[],int req_score){
                        for(i=0;i<10;i++){
                            if(req_score>scores_values[i]){position=i;goto movetop;}
                        }
                        movetop:
                                if(position!=-1){
                                            for(i=8;i>=position;i--){
                                                scores_values[i+1]=scores_values[i];
                                                strcpy(names_wvalues[i+1],names_wvalues[i]);
                                            }
                                            scores_values[position]=req_score;
                                            //names_wvalues[position][100]=player_name1;
                                            strcpy(names_wvalues[position],req_name);
                                }
}

/*
90
80
70
60
50
40
30
20
10
0

none1
none2
none3
none4
none5
none6
none7
none8
none9
none10

90
80
75
70
60
50
40
30
20
10
*/




#endif // end of menu
