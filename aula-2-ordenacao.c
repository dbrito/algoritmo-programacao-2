#include <stdio.h>

int main(void) {

	int vetor[4] = { 2, 3, 1, 4 };

	bolha(vetor, 4);
	return 0;
}

void bolha(int vetor[], int tamanho) {
	int, i, j, temp;
	for (i = 0; i < tamanho - 1; i++) {
		for (j = tamanho - 1; j > i; j--) {
			if (vetor[j] < vetor[j - 1]) {
				temp = vetor[j];
				vetor[j] = vetor[j - 1]
					vetor[j - 1] = temp;
			}
		}
	}

	for (i = 0; i < tamanho; i++) {
		printf("%d ->", vetor[i]);
	}
}
