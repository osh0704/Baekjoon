#include<stdio.h>

int main() {
	int heru, ausar, auset, max = 0;

	for (;;) {

		scanf("%d %d %d", &heru, &ausar, &auset);
		if (heru == 0 && ausar == 0 && auset == 0) break;

		if (heru >= ausar && heru >= auset) {
			if (heru * heru - ausar * ausar - auset * auset == 0) {
				printf("right\n");
			}
			else printf("wrong\n");
		}
		else if (ausar >= heru && ausar >= auset) {
			if (ausar * ausar - heru * heru - auset * auset == 0) {
				printf("right\n");
			}
			else printf("wrong\n");
		}
		else {
			if (auset * auset - heru * heru - ausar * ausar == 0) {
				printf("right\n");
			}
			else printf("wrong\n");
		}

	}
}

//========================================================================================================
// 개선한 풀이

#include<stdio.h>

int main() {
	int heru, ausar, auset, res1, res2, res3 = 0;

	for (;;) {

		scanf("%d %d %d", &heru, &ausar, &auset);
		if (heru == 0 && ausar == 0 && auset == 0) break;


		res1 = heru * heru, res2 = ausar * ausar, res3 = auset * auset;
		
		if (res1 + res2 == res3 || res2 + res3 == res1 || res1 + res3 == res2) {
			printf("right\n");
		}
		else printf("wrong\n");
	}
}
