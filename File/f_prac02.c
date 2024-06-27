#include <stdio.h>
main()
{
	FILE* fp;
	int max_score, score = 0;
	char ch, max_name[20], name[20];

	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", max_name, &max_score);
	fclose(fp);

	printf("Best Score : %s	%d\n", max_name, max_score);

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

	if (score > max_score) {
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("\nNew Record!!\n");
	}

	/*fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n%d\n", name, score);
	fclose(fp);*/

	return 0;
}