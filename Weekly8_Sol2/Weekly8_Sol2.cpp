#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <math.h>
int main()						//Problem 67, Solution 2, ID Student 65010902
{
	char code[200];
	strcpy(code, "010101000110100001100001011101000010011101110011001000000110001101101111011100100111001001100101011000110111010000101110");
	int segment[8];
	int decimal;
	for (int i = 0; i < strlen(code); i += 8)
	{
		decimal = 0;
		segment[0] = int(code[i]) - '0';
		segment[1] = int(code[i + 1]) - '0';
		segment[2] = int(code[i + 2]) - '0';
		segment[3] = int(code[i + 3]) - '0';
		segment[4] = int(code[i + 4]) - '0';
		segment[5] = int(code[i + 5]) - '0';
		segment[6] = int(code[i + 6]) - '0';
		segment[7] = int(code[i + 7]) - '0';

		for (int j = 7; j >= 0; j--)
		{
			decimal += (segment[7 - j] * pow(2,j));
		}
		printf("%c", decimal);
	}















	return 0;
}