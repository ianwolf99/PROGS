FILE * in = fopen("scores.txt", "r");
for(int h = 0; h < 60; h++)
	fscanf(in, "%d", &score[h]);
	printf("%d\n", &score[h]);