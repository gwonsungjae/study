#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int sum;
int main() {
	for (int i = 1; i <= 10; i++) {
		int a = (rand() % 20) + 1;
		int c = (rand() % 20) + 1;
		char ran[4] = { '+','-','*','/' };
		char b = ran[rand() % 4 + 1];
		int s;
		switch ('b') {
			case '+': sum = a + c; break;
			case '-': sum = a - c; break;
			case '*': sum = a * c; break;
			case '/': sum = a / c; break;
		}
		printf("[%d/10]%d %c %d =",i,a,b,c);
		scanf_s("%d", s);
		if (sum == s) {
			printf("Correct!\n");
		}
		else if (sum == s) {
			printf("Wrong! Answer is %d\n", sum);
		}
	}
}