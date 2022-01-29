#include <stdio.h>
#include <stdlib.h>



void reset(char board[][8]);

void draw_board(char board[8][8]);



int main (void)
{
	
	char board[8][8];
	int x1,y1,x2,y2;
	int count = 0;

	

		reset(board);
		draw_board(board);
		
		printf("ī��Ʈ %d\n", count);
		printf("���� ��ǥ�� �Է��ϼ���.(x y)(0~7) : ");
		scanf("%d %d", &y1, &x1);
	
		board[x1][y1]='O';
		count = count + 1;
		
		while(1)	
		{

			
			
			while (count%2==1)
			{
				draw_board(board);
				printf("ī��Ʈ %d\n", count);
				printf("��ǥ�� �Է��ϼ���. : ");
				scanf("%d %d", &y2, &x2);
				
				if (board[x2][y2]==' ')
				{
					if((x2==x1+1 && y2==y1+2 ) || (x2==x1+1 && y2==y1-2 ) || (x2==x1+2 && y2==y1+1 ) || (x2==x1+2 && y2==y1-1 ) || (x2==x1-1 && y2==y1+2 ) || (x2==x1-1 && y2==y1-2 ) || (x2==x1-2 && y2==y1+1 ) || (x2==x1-2 && y2==y1-1 ))
					{
						board[x2][y2]='O';
						count = count + 1;
					}
					else 
					{
						printf("\n�߸��� ��ġ�Դϴ�! 1 �ٽ� �Է��ϼ���.\n");
					}
				
				} 
				else 
				{
					printf("\n�߸��� ��ġ�Դϴ�! �ٽ�2 �Է��ϼ���.\n");
				}
				
				if(count==64)
			{
				printf("\n�̰���ϴ�!");  
				break;
			}
			else
			{
				continue;
			}
			}
			

		
			while (count%2==0)
			{
				draw_board(board);
				printf("ī��Ʈ %d\n", count);
				printf("��ǥ�� �Է��ϼ���. : ");
				scanf("%d %d", &y1, &x1);
				
				if (board[x1][y1]==' ')
				{
					if((x1==x2+1&&y1==y2+2 ) || (x1==x2+1&&y1==y2-2 ) || (x1==x2+2&&y1==y2+1 ) || (x1==x2+2&&y1==y2-1 ) || (x1==x2-1&&y1==y2+2 ) || (x1==x2-1&&y1==y2-2 ) || (x1==x2-2&&y1==y2+1 ) || (x1==x2-2&&y1==y2-1 ))
					{
						board[x1][y1]='O';
						count = count + 1;
					}
					else 
					{
						printf("\n�߸��� ��ġ�Դϴ�! 3 �ٽ� �Է��ϼ���.\n");
					}
				
				} 
				else 
				{
					printf("\n�߸��� ��ġ�Դϴ�! 4 �ٽ� �Է��ϼ���.\n");
				}
			}
		
		
		}
	

	
}

void reset(char board[8][8])
{

	int i, j;

	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			board[i][j] = ' ';
		}
	}
}

void draw_board(char board[8][8])
{
	int i;
	
	printf("     0   1   2   3   4   5   6   7\n");
	for (i=0;i<8;i++)
	{
		printf("   |---|---|---|---|---|---|---|---|\n");
		printf(" %d | %c | %c | %c | %c | %c | %c | %c | %c |\n",i , board[i][0], board[i][1], board[i][2], board[i][3], board[i][4], board[i][5], board[i][6],board[i][7]);
	}
	printf("   |---|---|---|---|---|---|---|---|\n");
}
