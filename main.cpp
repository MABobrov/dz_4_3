#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	int n;
	int array[100];
	int temp;
	printf("Введите количество элементов в массиве: ");
	scanf("%d", &n);

	if (n > 100) {
		printf("Количество элементов не может быть больше 100 \n");
		return 1;
	}

	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 101; // генерируем случайное число от 0 до 100
	}

	// сортируем
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (array[i] > array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}