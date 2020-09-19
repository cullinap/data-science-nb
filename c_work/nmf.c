#include <stdio.h>
#include <stdlib.h>


float float_rand(float min, float max) {
	float RAND_MAX = 100,0
	float scale = rand() / (float) RAND_MAX;
	return min + scale * (max - min);
}



int main() {
	int disp[2][2];

	float (*random)(float, float) = &float_rand;


	int i, j;
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++) {
			printf("Enter value for disp[%d][%d]", i,j);
			disp[i][j] = random(0.0, 9.0);
			//scanf("%d", &disp[i][j]);
		}
	}

	printf("Matrix elements:\n");
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++) {
			printf("%d ", disp[i][j]);
			if(j==2){
				printf("\n");
			}
		}
	}

	return 0;
}


