/* A timer */
#include <stdio.h>

/*You can change it */
#define DELAY 128000

struct my_time{
	int hours;
	int minutes;
	int seconds;
};

void display(struct my_time *t);
void update(struct my_time *t);
void delay(void);

int main(){
	struct my_time systime;

	systime.hours = 0;
	systime.minutes = 0;
	systime.seconds = 0;

	/*infinity loop */
	for(;;){
		
	}
}
