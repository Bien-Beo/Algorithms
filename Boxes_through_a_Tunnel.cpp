//Hackerrank : Boxes through a Tunnel
#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

typedef struct box { //Define three fields of type int: length, width and height
	int length;
	int width;
	int height;
} box;

int getVolume(box b) { //Return the volume of the box
	return b.length * b.width * b.height;
}

int isLowerThanMaxHeight(box b) {
	return (b.height < MAX_HEIGHT) ? 1 : 0;
}

int main() {
	int n;
	scanf("%d", &n);
	box boxes[n];
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (isLowerThanMaxHeight(boxes[i])) {
			printf("%d\n", getVolume(boxes[i]));
		}
	}
	return 0;
}
