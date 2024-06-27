#include <stdio.h>
main()
{
	FILE* fp;
	int score = 0;
	char ch, name[20];

	printf("Enter player's name : ");
	scanf("%s", name);

	while (1) {
		printf("Current Score : %d ('e' to exit)\n", score);
		ch = getch();

		if (ch == 'e') {
			break;
		}

		score++;
	}

	fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n%d\n", name, score);
	fclose(fp);

	return 0;
}