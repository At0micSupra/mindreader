#include <stdio.h>

/*
who even knows what this does lol
*/

void setCursor(int column, int row) { printf("\033[%d;%dH", row, column); }

int main() {
	char c = '\0';		
	/*while((c = getchar()) != EOF) {
		printf("\b%c", *d);
		
	}*/
	char msg[] = "Hello. This is a test!";
	int i = 0;
	for(int r = 0; r < 24; r++) {
		for(int c = 0; c < 80; c++) {
			setCursor(c, r);
			printf("%c", msg[i++]);
		}
	}
}
