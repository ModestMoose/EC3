#include <stdlib.h>
#include <stdio.h>

int main() {

	//variable declarations
	int numint;
	float numfloat;
	FILE *inFile;

	//open the file to read from
	inFile = fopen("number.txt", "r");

	//exit the profram if opening file is unsuccessful
	if (inFile == NULL)
	{
		printf("Error: Can't open file\n");
		printf("Make sure there's a file named number.txt in the same folder as .c file\n");
		exit(101);
	}

	
	//get one number from file and save it as a float
	fscanf(inFile, "%f", &numfloat);

	//print float to STDOut
	printf("%f\n", numfloat);
	

	//close the file
	fclose (inFile);
	
	//exit program
	return 0;
}