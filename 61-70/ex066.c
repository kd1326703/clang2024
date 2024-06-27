#include <stdio.h>
main()
{
	char* pgame[3] = { "Wii", "Switch", "PS4Pro" };
	int i;


	//ex066
	/*char** p;
	p = pgame;
	
	for (i = 0; i < 3; i++) {
		printf("%s\n", *p++);
	}

	//ex066-1

	return 0;
}