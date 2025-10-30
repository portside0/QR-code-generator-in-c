#include <stdio.h>

int main ()
{
	int lengthofstring;
	
	printf("Enter length of the text\n");
	
	scanf(" %i", &lengthofstring);
	
	char string[lengthofstring];
	
	printf("Enter the text\n");
	
	scanf(" %[^\n]s", string);
	
	int binary[8];
	
	for (int p = 0; p < lengthofstring; p++)
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
}
