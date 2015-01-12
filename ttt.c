/*Tic Tac Toe is a child's game played on a 3 by 3 grid. One player, X, starts by placing an X at an unoccupied grid position. Then the other player, O, places an O at an unoccupied grid position. Play alternates between X and O until the grid is filled or one player's symbols occupy an entire line (vertical, horizontal, or diagonal) in the grid.


We will denote the initial empty Tic Tac Toe grid with nine dots. Whenever X or O plays we fill in an X or an O in the appropriate position. The example below illustrates each grid configuration from the beginning to the end of a game in which X wins.


subir imagenes



Your job is to read a grid and to determine whether or not it could possibly be part of a valid Tic Tac Toe game. That is, is there a series of plays that can yield this grid somewhere between the start and end of the game?


Input

The first line of input contains N, the number of test cases. 4N-1 lines follow, specifying N grid configurations separated by empty lines.
Output

For each case print "yes" or "no" on a line by itself, indicating whether or not the configuration could be part of a Tic Tac Toe game.
Example

Input:
2
X.O
OO.
XXX

O.X
XX.
OOO

Output:
yes
no
*/
#include <stdio.h>
int main()
{
int i,j,t,X,O;
scanf("%d",&t);
char arr[t][9];
for(i=0;i<t;i++)
{
for(j=0;j<9;j+=3)
scanf("\n%c%c%c",&arr[i][j],&arr[i][j+1],&arr[i][j+2]);
}

for(i=0;i<t;i++)
{
X=0;O=0;
for(j=0;j<9;j++)
{
if(arr[i][j]=='X' || arr[i][j]=='x')
	X++;
else
	if(arr[i][j]=='O' || arr[i][j]=='o')
		O++;
}
if(X==O || X==O+1)
printf("yes\n");
else
printf("no\n");
}
return 0;
}
