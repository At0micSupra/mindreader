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
	int ALLOC_BYTES = 1000000000; // one gigabyte
	while(1) {
		// allocate a new portion of ram
		// and find the next 128 chars
		char* ram = (char*) malloc(ALLOC_BYTES * sizeof(char));
		if(ram == NULL) {
			printf("your computer dun fucked up!");
			return 69;
		}
		printf("\n\x1B[31mtesting with %d access window size now...\x1B[0m\n", ALLOC_BYTES);
		for(int i = 0; i < ALLOC_BYTES; i++) {
			if(ram[i] == 0x08) {
				printf("BACKSPACE detetced!");
			} else if(ram[i] == 0x00) {
				//printf("NULL");
			} else {
				putchar(ram[i]);
			}
			//usleep(10);
		}
		ALLOC_BYTES++;
		free(ram); // freeing all your rams, go download more!
		usleep(100);
	}
}
