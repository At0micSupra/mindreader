#include <stdio.h>
#include <time.h>


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
	stupid();
}
