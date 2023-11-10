#include <stdio.h>
#include <time.h>

/*
who even knows what this does lol
*/

int main() {
	char* ch = "Reading all your memories:\n";	
	while(1) {
		printf("%c", *ch);
		ch++;
		usleep(100);
	}
}
