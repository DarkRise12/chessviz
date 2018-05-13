#include <stdio.h>
#include <string.h>
#include "board_print.h"

void pawn(char a[10][10], char str[6])
{
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
