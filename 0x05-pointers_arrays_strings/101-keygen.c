#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
int main(void)
{
	
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	  
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	  
	char symbols[] = "!@#$^&*?";
	
	int i = 0;
	  
	int password[N];

	int randomizer = 0;
					

	srand((unsigned int)(time(NULL)));
	  
	randomizer = rand() % 4;
	  
	for (i = 0; i < N; i++)
	{
		if (randomizer == 2) {
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3) {
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else {
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}

int main(void)
{
	int N = 10;
	  
	randomPasswordGeneration(N);
	  
	return (0);
}
