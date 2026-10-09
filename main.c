
#include <time.h>
#define CHAR_COUNT

int main(int argc, char **argv){

	//chance to print a character
	double charChance = 0.2;

	//array of character to include as an option to print
	char chars[7] = {'@', '#', '$', '%', '&', '/', '\\'};
	//length of characters in chars[]
	int charsSize = 7;

	srand(time(NULL));

	//command terminal input decides size of ascii art
	char *charGrid = createCanvas(arg[1], arg[2]);

	//printCanvas(charGrid, arg[1], arg[2]);
	//freeCanvas();

}
