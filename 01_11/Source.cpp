
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 

int main() {
	char txt[30]; 
	int count = 0; 
	FILE  *fpt;
	fpt = fopen("C:/Users/Bravo/source/repos/01_11/01_11/Debug/file/data1.txt", "r");


	if (fpt == NULL) {
		printf("Error...cannot open file! \n");
		exit(0);
	}
	printf("  READ DATA  \n"); 
	printf("--------------\n");

	while (!feof(fpt))
	{
		count++;
		if (fgets(txt, 29, fpt) != NULL) { //read data 
			printf("%d.%s ", count, txt);

			
		}
			
	}
	fclose(fpt);
	printf("\n--------------\n");
	return(0);
}

