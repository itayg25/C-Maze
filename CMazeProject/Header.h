#pragma once
#include <stdio.h>
#pragma warning(disable:4996)

#define MAXCHAR 1000
int linePrint() {
	FILE* fp;
	char line[MAXCHAR],c;
	const char filename[] = "C:\\Users\\user1\\Downloads\\Maze.txt";
	fp = fopen(filename, "r");
	char str[MAXCHAR];
	if (fp == NULL) {
		printf("Could not open file %s", filename);
		return 1;
	}
//	for (int i = 0; i < sizeof(line); i++)
//	{
//		while (line[i] == '#' || line[i] == ' ') {
//			printf("%s", line);

//		}
		c = fgetc(fp);
		while (c != EOF)
		{
			printf("%c", c);
			c = fgetc(fp);
		}

	fclose(fp);
	return 0;
}