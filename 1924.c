#include<stdio.h>
int main() {
	int x, y, res = 0;
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	char* days[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	scanf("%d %d", &x, &y);

	for (int i = 1; i < x; i++) res += month[i];

	res += y;
	printf("%s", days[res % 7]);
}
