#include <stdio.h>
#include <string.h>

void main(){
	char str[25], str1[100];

	int j=0;

	for(int i=0; i<=strlen(str);i++){
		switch(toupper(str[i])){
			case 'A':
			str1[j++] = '.';
			str1[j] = '-';
			break;

			case 'B':
			str1[j++] = '-';
			str1[j++] = '.';
			str1[j++] = '.';
			str[j] = '.';
			break;

			case 'C':
			str1[j++] = '-';
			str1[j++] = '.';
			str1[j++] = '-';
			str1[j] = '.';
			break;

			case 'D':
			str1[j++] = '-';
			str1[j++] = '.';
			str1[j] = '.';
			break;

			case 'E':
			str1[j++] = '.';
			break;

			case 'F':
			str1[j++] = '.';
			str1[j++] = '.';
			str1[j++] = '-';
			str1[j] = '.';
			break;

			case 'G':
			str1[j++] = '.';
			str1[j++] = '-';
			str1[j] = '.'; 
			break;

			case 'H':
			str1[j++] = '.';
			str1[j++] = '.';
			str1[j++] = '.';
			str1[j] = '.';
			break;

			case 'I':
			str1[j++] = '.';
			str1[j] = '.';
			break;

			case 'J':
			str1[j++] = '.';
			str1[j++] = '-';
			str1[j++] = '-';
			str1[j] ='-';
			break; 

		case ' ':
			str1[j] = ' ';
			break;

		}
		j++;
	}
	str1[j-1] = '\0';
	puts(str1);
	getch();
}



