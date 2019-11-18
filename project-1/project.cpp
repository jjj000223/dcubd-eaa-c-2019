#include <stdio.h>

int main(void)
{
		int a, b;
		double x, y;
		printf("다음 단위에서 [변환할 단위] --> [변환결과 단위]로 연산합니다.\n");
		printf("[1] 미터(m) [2] 인치(in) [3] 피트(ft) [4] 야드(yd) [0] 종료(stop)\n");
		printf("[이전단위] --> [변환단위], 두 개의 메뉴 번호를 선택하세요. >>");

		scanf_s("%d %d", &a, &b);
		do {
			printf("[변환활 단위]의 길이를 입력하세요. >>");
			scanf_s("%lf", &x);

			if (x == 0)
			{
				printf("종료합니다.");
				break;
			}
			else if (a == 1 && b == 1)
			{
				y = x;
				printf("[결과] %.2f(미터) --> %.2f(미터)", x, y);
			}
			else if (a == 1 && b == 2)
			{
				y = 39.37 * x;
				printf("[결과] %.2f(미터) --> %.2f(인치)", x, y);
			}
			else if (a == 1 && b == 3)
			{
				y = 3.28 * x;
				printf("[결과] %.2f(미터) --> %.2f(피트)", x, y);
			}
			else if (a == 1 && b == 4)
			{
				y = 1.09 * x;
				printf("[결과] %.2f(미터) --> %.2f(야드)", x, y);
			}
			else if (a == 2 && b == 1)
			{
				y = 0.025 * x;
				printf("[결과] %.2f(인치) --> %.2f(미터)", x, y);
			}
			else if (a == 2 && b == 2)
			{
				y = x;
				printf("[결과] %.2f(인치) --> %.2f(인치)", x, y);
			}
			else if (a == 2 && b == 3)
			{
				y = 0.08 * x;
				printf("[결과] %.2f(인치) --> %.2f(피트)", x, y);
			}
			else if (a == 2 && b == 4)
			{
				y = 0.027 * x;
				printf("[결과] %.2f(인치) --> %.2f(야드)", x, y);
			}
			else if (a == 3 && b == 1)
			{
				y = 0.3 * x;
				printf("[결과] %.2f(피트) --> %.2f(미터)", x, y);
			}
			else if (a == 3 && b == 2)
			{
				y = 12 * x;
				printf("[결과] %.2f(피트) --> %.2f(인치)", x, y);
			}
			else if (a == 3 && b == 3)
			{
				y = x;
				printf("[결과] %.2f(피트) --> %.2f(피트)", x, y);
			}
			else if (a == 3 && b == 4)
			{
				y = 0.33 * x;
				printf("[결과] %.2f(피트) --> %.2f(야드)", x, y);
			}
			else if (a == 4 && b == 1)
			{
				y = 0.9 * x;
				printf("[결과] %.2f(야드) --> %.2f(미터)", x, y);
			}
			else if (a == 4 && b == 2)
			{
				y = 36 * x;
				printf("[결과] %.2f(야드) --> %.2f(인치)", x, y);
			}
			else if (a == 4 && b == 3)
			{
				y = 3 * x;
				printf("[결과] %.2f(야드) --> %.2f(피트)", x, y);
			}
			else if (a == 4 && b == 4)
			{
				y = x;
				printf("[결과] %.2f(야드) --> %.2f(야드)", x, y);
			}


		} while (1);
}