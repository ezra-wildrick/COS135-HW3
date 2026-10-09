#include <stdio.h>
#include <stdlib.h>

char pickChar(float charChance, char *chars, int charsSize){
	char pickedChar = ' ';
	double d = rand()%1;
	if(d <= charChance){
		pickedChar = genRandomChar(*chars, charsSize);
	}

	return pickedChar;
}

char genRandomChar(char *chars, int size){

	//generate a number between 0 and size
	int randChar = rand(*chars)%size;

	return chars[randChar];
}

char createCanvas(int width, int height){

	int width = x;
	int height = y;

	char *grid = malloc(sizeOf(*char) * width);

	for (int i = 0; i < width; i++){
	grid[i] = malloc(sizeOf(char) *height);
	}
	return grid;
}

void printCanvas(char *grid, int width, int height){
	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			printf(grid[i][j]);
		}
	}

}

void freeCanvas(char *grid, int width, int height){
	for(int i = 0; i < width; i++){
		free(grid[i]);
	}
	free(grid);

}
