//A batsman scored 110 runs which included 3 boundaries and 8 sixes. What percent of his total score did he make by running between the wickets?  Write a C program

#include <stdio.h>

int main(){
	printf("======================= Percent of Total score made by running between the wickets ======================"); 
	float inPercent	;
	printf("\n A batsman scored 110 runs.\n");
	printf("\n He made 3 boundaries and 8 sixes. \n");
	printf("\n 3 boundaries = 3 * 4 runs = %d runs\n\n 8 sixes = 8 * 6 runs = %d runs\n",3*4,8*6);
	printf("\n Run made by wicket = Total run - run made by 3 boundaries and 8 sixes\n");
	printf("\n Run made by wicket = %d - %d = %d \n",110,3*4 + 8 * 6,110 - (3*4 + 8*6));
    inPercent=((float)(3*4 + 8*6)/110)*100;
	printf("\n Percent of Total score made by running between the wickets = (%d/110)*100 = %.2f\n\n",110-(3*4 + 8*6),inPercent);
	return 0;
}