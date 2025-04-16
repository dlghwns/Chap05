/* 파일명: ProAss01.c

 * 내용: Programming Assignment. 온도를 입력받아 섭씨 온도는 화씨 온도로, 화씨 온도는 섭씨 온도로 변환하는 프로그램을 작성하시오. 
								"27 C" 또는 27 F"처럼 온도를 입력받을 때 섭씨인지 화씨인지 구분할 수 있는 문자를 함께 입력받는다. 
								함께 입력된 문자가 'C'면 섭씨 온도이므로 화씨 온도를 구해서 출력하고,
								입력된 문자가 'F'면 화씨 온도이므로 섭씨 온도를 구해서 출력한다.
 * 작성자: 이호준

 * 날짜: 2025.4. 8

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 
 * 반환 : 없음
 */


int solve()
{
	char ch;
	float temp = 0.0;
	
	float result = 0.0;

	printf("온도? ");
	scanf("%d %c", &temp, &ch);

	if (ch == "c" || ch == "C")
	{ //화씨온도 구하기.
		result = (temp - 32) * (5 / 9);

		printf("%d F ==> %d C\n", temp, result);
	}

	else if (ch == "f" || ch == "F")
	{ //섭씨온도 구하기.
		result = (temp * (9 / 5)) + 32;

		printf("%d C ==> %d F\n", temp, result);
	}

}


int main()
{
	solve();
	return 0;
}