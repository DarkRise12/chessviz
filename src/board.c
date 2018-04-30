#include <stdio.h>
#include <string.h>
#include "board_print.h"
void board(char a[9][9]){

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

    a[1][0]='8';
    a[2][0]='7';
    a[3][0]='6';
    a[4][0]='5';
    a[5][0]='4';
    a[6][0]='3';
    a[7][0]='2';
    a[8][0]='1';

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

void move(char a[9][9]){
    int j,s,k,b;
    FILE *fw = fopen("log.txt","wt");
    char str[5];
    char temp;

    int m = 8;
    char buk[m]={'a','b','c','d','e','f','g','h'};
    char num[m]={'1','2','3','4','5','6','7','8'};

    while(1){
      scanf("%s",str);
      if(strcmp(str,"end")==0){
	printf("Stop!");
	break;}
      fprintf(fw,"%s\n",str);

      for(int i = 0; i < m;i++)
	{
	  if(str[0]==buk[i])
	     j = i + 1;
	  if(str[1]==num[i])
	     s = 7 - i;
	  if(str[3]==buk[i])
	     k = 1 + i;
	  if(str[4]==num[i])
	     b = 7 - i;
	}
       if(!(j < 9 && j >= 1 && s < 9 && s >= 1 && k < 9 && k >= 1 && b < 9 && b >= 1))
            printf("\nERROR\n");
        else
        {
            temp = a[s][j];
            a[s][j] = a[b][k];
            a[b][k] = temp;
            for(int p = 0; p < 9; p++)
            {
                for(int z = 0; z < 9; z++)
                fprintf(fw, "%c ", a[p][z]);
                fprintf(fw, "\n");
            }
        j = 10; s = 10; k = 10; b = 10;
        }

        print(a);
    }
    fclose(fw);
}
