#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main (void) 
{
	int i, j;
	int strike, ball, count;
	int answer[2], input[2];  
	char choice = 'y';
	
	srand(time(NULL)); //랜덤 seed값 설정 
	
	while (choice != 'n')
	{
		
		count=1;
		
		while (1) //무한반복  
		{
			for (i=0;i<3;i++) //랜덤숫자 설정 
			{
				answer[i] = rand() % 10;
			} 
			
			if(answer[0]==answer[1] || answer[1]==answer[2] || answer[2]==answer[0]) //같은숫자 재설정  
			{
				continue; 
			} 
			else
			{
				break;
			}
		}

		printf("숫자야구를 시작합니다.");
		
		while(1)
		{
			ball = 0;
			strike = 0;
			
			
			printf("\n\n%d 번째 시도입니다. \n3자리 숫자를 입력해 주세요. : ", count); //값 입력 받기 
			scanf("%01d%01d%01d", &input[0], &input[1], &input[2]);
			
			for(i=0;i<3;i++) //값 비교  
			{
				for(j=0;j<3;j++)
				{
					if (answer[i]==input[j]) //같은 숫자가 있는 경우  
					{
						ball++;
						
						if(i==j) //위치까지 같은 경우  
						{
							strike++; 
						}
					} 
				}
			}
			
			ball-=strike; //볼이랑 스트라이크랑 겹치므로 볼에서 스크라이크 빼주기 
			
			if (strike) //출력  
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
	printf("\n맞췄습니다! \n다시 게임하실려면 y, 그만 두실려면 n를 입력해 주세요. : "); //재시작여부 묻기  
	fflush(stdin);
	scanf("%c", &choice); 
	}
	


}

