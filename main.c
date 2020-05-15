#include <stdio.h>
#define m 10

void display_chess(char (*chess)[m])
{
printf("-------------------");
for (int i = 0; i < m; i++) {
printf("\n");
for (int j = 0; j < m; j++) {
printf("%c ", chess[i][j]);
}
}
printf("\n");
printf("-------------------\n");
}

void init_b(char (*chess)[m])
{

for (int i = 0; i < m; i++) {
for (int j = 0; j < m; j++) {
chess[i][j] = ' ';
}
}

chess[9][1] = 'a';
chess[9][2] = 'b';
chess[9][3] = 'c';
chess[9][4] = 'd';
chess[9][5] = 'e';
chess[9][6] = 'f';
chess[9][7] = 'g';
chess[9][8] = 'h';

chess[1][0] = '8';
chess[2][0] = '7';
chess[3][0] = '6';
chess[4][0] = '5';
chess[5][0] = '4';
chess[6][0] = '3';
chess[7][0] = '2';
chess[8][0] = '1';


chess[1][1] = 'R';
chess[1][2] = 'N';
chess[1][3] = 'B';
chess[1][4] = 'Q';
chess[1][5] = 'K';
chess[1][6] = 'B';
chess[1][7] = 'N';
chess[1][8] = 'R';

chess[8][1] = 'r';
chess[8][2] = 'n';
chess[8][3] = 'b';
chess[8][4] = 'q';
chess[8][5] = 'k';
chess[8][6] = 'b';
chess[8][7] = 'n';
chess[8][8] = 'r';

chess[2][1] = 'P';
chess[2][2] = 'P';
chess[2][3] = 'P';
chess[2][4] = 'P';
chess[2][5] = 'P';
chess[2][6] = 'P';
chess[2][7] = 'P';
chess[2][8] = 'P';

chess[7][1] = 'p';
chess[7][2] = 'p';
chess[7][3] = 'p';
chess[7][4] = 'p';
chess[7][5] = 'p';
chess[7][5] = 'p';
chess[7][5] = 'p';
chess[7][6] = 'p';
chess[7][7] = 'p';
chess[7][8] = 'p';
}

int main()
{
char chess[m][m];
init_b(chess);
display_chess(chess);
}
