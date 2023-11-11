#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/*
this is just the original stupid program that crashes due to a segfault.
*/
void stupid() {
	char* ch = "Reading all your memories:\n";	
	while(1) {
		printf("%c", *ch);
		ch++;
		usleep(100);
	}
}


int main() {
	//stupid();
	printf("LOLZ IM READING ALL UR SECRET ARE BELONG TO ME\n\n");
	// because if we malloc the same size right after freeing, it will give us the same data,
	// we will try getting more and more data each time. hopefully this will lead to fresh data!
	int WINDOW_SIZE = 512;
	while(1) {
		// allocate a new portion of ram
		// and find the next 512 chars
		char* ram = (char*) malloc(WINDOW_SIZE * sizeof(char));
		if(ram == NULL) {
			printf("your computer dun fucked up!");
			return 69;
		}
		printf("\n\x1B[31mpress enter to load the next %d chars of your rams\x1B[0m", WINDOW_SIZE);
		getc(stdin);
		usleep(10000);
		printf("\e[1;1H\e[2J");
		printf("Address: %p\n", ram);
		for(int i = 0; i < WINDOW_SIZE; i++) {
			// don't need this part in 0x0 mode
			/*if(ram[i] == 0x08) {
				printf("BACKSPACE detetced!");
			}*/ 
			printf("%x", ram[i]);
			//putchar(ram[i]);
			//usleep(10);
		}
		//free(ram);
		// ^^^^^^^^ so instead of freeing ram, if we were to, say, *not* free it,
		// then we would DEFINITELY not get any of the same pages.
		// and since we're not writing to it, we never REALLY use up any RAM,
		// so the OS should be smart enough to not actually allocate, right?
	}
}
