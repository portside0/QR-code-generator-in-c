#include <stdio.h>
#include <string.h>

int convert()
{
	int lengthofstring;
	
	printf("Enter length of the text\n");
	
	scanf(" %i", &lengthofstring);
	
	char string[lengthofstring];
	
	printf("Enter the text\n");
	
	scanf(" %[^\n]s", string);
	
	int binary[8];
	
	for (int p = 0; p < strlen(string); p++)
	{
		int character = string[p];
		
		for (int q = 7; q > -1; q--)
		{
			binary[q] = character % 2;
			
			character = character / 2;
		}
		
		for (int r = 0; r < 8; r++)
		{
			printf("%i", binary[r]);
		}
		
		printf(" ");
	}
	
	printf("\n");
	
	printf("Length of string:\n");
	
	int len[8];
	
	int actual_length = strlen(string);
	
	for (int q = 7; q > -1; q--)
	{
		len[q] = actual_length % 2;
			
		actual_length = actual_length / 2;
	}
	
	for (int s = 0; s < 8; s++)
	{
		printf("%i", len[s]);
	}
}