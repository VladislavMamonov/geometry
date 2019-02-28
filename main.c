#include <stdio.h>
#include <stdlib.h>

#define n 30


int main()
{
	FILE *data;
	char arr[n];

	
	data = fopen("data.txt", "r");  /*Считываем входные данные*/

	
	if (data == NULL) {
		printf("невозможно открыть файл\n");
		return system("cls");
	}

	
	while (fgets (arr, n, data) != NULL)
		printf("%s", arr);
	printf("\n");


	fclose(data);
}
