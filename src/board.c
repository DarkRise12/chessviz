#include <stdio.h>
#include <string.h>
#include "board_print.h"
#include "live.h"

void board(char a[10][10]){

 for (int i=0;i<9;i++)
    {
        for (int j=0;j<9;j++)
        {
            a[i][j]=' ';
        }
}
     a[0][1]='a';
     a[0][2]='b';
     a[0][3]='c';
     a[0][4]='d';
     a[0][5]='e';
     a[0][6]='f';
     a[0][7]='g';
     a[0][8]='h';

    a[1][0]='1';
    a[2][0]='2';
    a[3][0]='3';
    a[4][0]='4';
    a[5][0]='5';
    a[6][0]='6';
    a[7][0]='7';
    a[8][0]='8';

    a[1][1]='R';
    a[1][2]='N';
    a[1][3]='B';
    a[1][4]='Q';
    a[1][5]='K';
    a[1][6]='B';
    a[1][7]='N';
    a[1][8]='R';

    a[8][1]='r';
    a[8][2]='n';
    a[8][3]='b';
    a[8][4]='q';
    a[8][5]='k';
    a[8][6]='b';
    a[8][7]='n';
    a[8][8]='r';

    a[2][1]='P';
    a[2][2]='P';
    a[2][3]='P';
    a[2][4]='P';
    a[2][5]='P';
    a[2][6]='P';
    a[2][7]='P';
    a[2][8]='P';

    a[7][1]='p';
    a[7][2]='p';
    a[7][3]='p';
    a[7][4]='p';
    a[7][5]='p';
    a[7][6]='p';
    a[7][7]='p';
    a[7][8]='p';
}

void move(char a[10][10]){
	char str[6];
	FILE *fw = fopen("log.txt","wt");

	while(1){
		 scanf("%s",str);
      if(strcmp(str,"stop")==0){
		printf("Stop!");
		break;}
	  fprintf(fw,"%s\n",str);

		if(str[0] == 'Q' || str[0] == 'q')
		queen(a,str);
		if(str[0] == 'K' || str[0] == 'k')
		king(a,str);
		if(str[0] == 'R' || str[0] == 'r')
		rook(a,str);
		if(str[0] == 'B' || str[0] == 'b')
		bishop(a,str);
		if(str[0] == 'N' || str[0] == 'n')
		knight(a,str);
		print(a);
		if(str[0] == 'a' || str[0] == 'b' || str[0] == 'c' || str[0] == 'd' || str[0] == 'e' || str[0] == 'f' || str[0] == 'g' || str[0] == 'h')
		pawn(a,str);
		
		
}


    fclose(fw);
	}
