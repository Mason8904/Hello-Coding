#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main (void) 
{
	int i, j;
	int strike, ball, count;
	int answer[2], input[2];  
	char choice = 'y';
	
	srand(time(NULL)); //���� seed�� ���� 
	
	while (choice != 'n')
	{
		
		count=1;
		
		while (1) //���ѹݺ�  
		{
			for (i=0;i<3;i++) //�������� ���� 
			{
				answer[i] = rand() % 10;
			} 
			
			if(answer[0]==answer[1] || answer[1]==answer[2] || answer[2]==answer[0]) //�������� �缳��  
			{
				continue; 
			} 
			else
			{
				break;
			}
		}

		printf("���ھ߱��� �����մϴ�.");
		
		while(1)
		{
			ball = 0;
			strike = 0;
			
			
			printf("\n\n%d ��° �õ��Դϴ�. \n3�ڸ� ���ڸ� �Է��� �ּ���. : ", count); //�� �Է� �ޱ� 
			scanf("%01d%01d%01d", &input[0], &input[1], &input[2]);
			
			for(i=0;i<3;i++) //�� ��  
			{
				for(j=0;j<3;j++)
				{
					if (answer[i]==input[j]) //���� ���ڰ� �ִ� ���  
					{
						ball++;
						
						if(i==j) //��ġ���� ���� ���  
						{
							strike++; 
						}
					} 
				}
			}
			
			ball-=strike; //���̶� ��Ʈ����ũ�� ��ġ�Ƿ� ������ ��ũ����ũ ���ֱ� 
			
			if (strike) //���  
			{
				printf("%dS", strike);
			} 
			if (ball)
			{
				printf("%dB", ball);
			}
			if ((strike | ball)==0)
			{
				printf("OUT");
			}
			if(strike==3)
			{
				break;
			}
		count++;
		} 
	printf("\n������ϴ�! \n�ٽ� �����ϽǷ��� y, �׸� �νǷ��� n�� �Է��� �ּ���. : "); //����ۿ��� ����  
	fflush(stdin);
	scanf("%c", &choice); 
	}
	


}

