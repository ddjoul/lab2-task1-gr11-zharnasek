#include <stdio.h>

int is_prime(int num) {
		if (num < 2) return 0;
		for (int i = 2; i * i <= num; i++) {
				if (num % i == 0) return 0;
		}
		return 1;
}

void find_twin_primes(int limit) {
		for (int i = 2; i <= limit - 2; i++) {
				if (is_prime(i) && is_prime(i + 2)) {
						printf("%d и %d\n", i, i + 2);
				}
		}
}

int main() {
		int a;
		printf("Введите предел для поиска простых чисел-близнецов: ");
		scanf("%d", &a);
		find_twin_primes(a);
		return 0;
}
