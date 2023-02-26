#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void dz_4_3() {
	int n;
	int array[100];
	int temp;
	printf("Введите количество элементов в массиве для дз 4.3: ");
	scanf("%d", &n);

	if (n > 100) {
		printf("Количество элементов не может быть больше 100 \n");
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

}

void dz_4_4() {
	int n, min, max;
	float sum = 0;
	float sr_ar;
	int array[100];

	printf("Введите количество элементов в массиве для дз 4.4:  ");
	scanf("%d", &n);


	printf("Введите %d чисел:\n", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	// находим минимальное и максимальное значения
	min = max = array[0];
	for (int i = 1; i < n; i++) {
		if (array[i] < min) {
			min = array[i];
		}
		if (array[i] > max) {
			max = array[i];
		}
	}

	// находим сумму всех элементов
	for (int i = 0; i < n; i++) {
		sum += array[i];
	}

	// находим среднее арифметическое
	sr_ar = sum / n;


	printf("Минимальное: %d\n", min);
	printf("Максимальное: %d\n", max);
	printf("Сумма: %.2f\n", sum);
	printf("Среднее арифметическое: %.2f\n", sr_ar);


}

int main(void)
{
	dz_4_3();dz_4_4();
	return 0;
}
