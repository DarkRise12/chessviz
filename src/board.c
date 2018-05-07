#include <stdio.h>
#include <string.h>
#include "board_print.h"
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
	char temp;
	char buk[]={'a','b','c','d','e','f','g','h'};
	int z;
	int c = 0;
	int i,j = 0;
	while(1){
		 scanf("%s",str);
      if(strcmp(str,"stop")==0){
		printf("Stop!");
		break;}
	  fprintf(fw,"%s\n",str);
	  
		for(z = 0;z <= 8; z++){
		  if(str[0]==buk[z]){
		    c = z;
		    break;}
		  	
		}
		if(c == 0){
			if(str[1] == '2'){
				if(str[4] == '3'){
					temp = a[2][1];
					a[2][1] = a[3][1];
					a[3][1] = temp;
    					    for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}}
				
				if(str[4] == '4'){
					temp = a[2][1];
					a[2][1] = a[4][1];
					a[4][1] = temp;
				       for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
																
			}
			if(str[1] == '7'){
				if(str[4] == '6'){
					temp = a[7][1];
					a[7][1] = a[6][1];
					a[6][1] = temp;
					        for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
					}
				
				if(str[4] == '5'){
					temp = a[7][1];
					a[7][1] = a[5][1];
					a[5][1] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}       
					}
				}
													
			
		}
    	if(c == 1){
			if(str[1] == '2'){
				if(str[4] == '3'){
					temp = a[2][2];
					a[2][2] = a[3][2];
					a[3][2] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
				if(str[4] == '4'){
					temp = a[2][2];
					a[2][2] = a[4][2];
					a[4][2] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
													
			}
			if(str[1] == '7'){
				if(str[4] == '6'){
					temp = a[7][2];
					a[7][2] = a[6][2];
					a[6][2] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
				if(str[4] == '5'){
					temp = a[7][2];
					a[7][2] = a[5][2];
					a[5][2] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
													
			}
		}
    	if(c == 2){
			if(str[1] == '2'){
				if(str[4] == '3'){
					temp = a[2][3];
					a[2][3] = a[3][3];
					a[3][3] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
				if(str[4] == '4'){
					temp = a[2][3];
					a[2][3] = a[4][3];
					a[4][3] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
													
			}
			if(str[1] == '7'){
				if(str[4] == '6'){
					temp = a[7][3];
					a[7][3] = a[6][3];
					a[6][3] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
				if(str[4] == '5'){
					temp = a[7][3];
					a[7][3] = a[5][3];
					a[5][3] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
													
			}
		}
		if(c == 3){
			if(str[1] == '2'){
				if(str[4] == '3'){
					temp = a[2][4];
					a[2][4] = a[3][4];
					a[3][4] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
				if(str[4] == '4'){
					temp = a[2][4];
					a[2][4] = a[4][4];
					a[4][4] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
													
			}
			if(str[1] == '7'){
				if(str[4] == '6'){
					temp = a[7][4];
					a[7][4] = a[6][4];
					a[6][4] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
				if(str[4] == '5'){
					temp = a[7][4];
					a[7][4] = a[5][4];
					a[5][4] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
													
			}
		}
		if(c == 4){
			if(str[1] == '2'){
				if(str[4] == '3'){
					temp = a[2][5];
					a[2][5] = a[3][5];
					a[3][5] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
				if(str[4] == '4'){
					temp = a[2][5];
					a[2][5] = a[4][5];
					a[4][5] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
													
			}
			if(str[1] == '7'){
				if(str[4] == '6'){
					temp = a[7][5];
					a[7][5] = a[6][5];
					a[6][5] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
				if(str[4] == '5'){
					temp = a[7][5];
					a[7][5] = a[5][5];
					a[5][5] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
													
			}
		}
		if(c == 5){
			if(str[1] == '2'){
				if(str[4] == '3'){
					temp = a[2][6];
					a[2][6] = a[3][6];
					a[3][6] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
				if(str[4] == '4'){
					temp = a[2][6];
					a[2][6] = a[4][6];
					a[4][6] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
													
			}
			if(str[1] == '7'){
				if(str[4] == '6'){
					temp = a[7][6];
					a[7][6] = a[6][6];
					a[6][6] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
				if(str[4] == '5'){
					temp = a[7][6];
					a[7][6] = a[5][6];
					a[5][6] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
													
			}
		}
		if(c == 6){
			if(str[1] == '2'){
				if(str[4] == '3'){
					temp = a[2][7];
					a[2][7] = a[3][7];
					a[3][7] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
				if(str[4] == '4'){
					temp = a[2][7];
					a[2][7] = a[4][7];
					a[4][7] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
													
			}
			if(str[1] == '7'){
				if(str[4] == '6'){
					temp = a[7][7];
					a[7][7] = a[6][7];
					a[6][7] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
				if(str[4] == '5'){
					temp = a[7][7];
					a[7][7] = a[5][7];
					a[5][7] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
													
			}
		}
		if(c == 7){
			if(str[1] == '2'){
				if(str[4] == '3'){
					temp = a[2][8];
					a[2][8] = a[3][8];
					a[3][8] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
				if(str[4] == '4'){
					temp = a[2][8];
					a[2][8] = a[4][8];
					a[4][8] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
													
			}
			if(str[1] == '7'){
				if(str[4] == '6'){
					temp = a[7][8];
					a[7][8] = a[6][8];
					a[6][8] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
				if(str[4] == '5'){
					temp = a[7][8];
					a[7][8] = a[5][8];
					a[5][8] = temp;
					for(i = 0; i < 9; i++)
            {
                for(j = 0; j < 9; j++)
                fprintf(fw, "%c ", a[i][j]);
                fprintf(fw, "\n");
}
				}
													
			}
		}
		
		
	print(a); 
}
	

    fclose(fw);
	}
