#include<stdio.h>
int main() {
	int A, B, V, t1 = 0, cnt = 0;
	scanf("%d %d %d", &A, &B, &V);
	t1 = V - A;
	if (t1 % (A - B) == 0) {
		printf("%d", t1 / (A - B) + 1);
		return 0;
	}
	else printf("%d", t1 / (A - B) + 2);

}
