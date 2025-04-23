/* 파일명: ProAss.c

 * 내용:
 * 작성자: 이호준

 * 날짜: 2025.4. 16

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) :
 * 반환 : 없음
 */
void solve()
{
	float minute, ki = 0.0;

	printf("구간 단속 소요 시간(분)? ");
	scanf("%f", &minute);
	printf("구간 단속 주행 거리 (km)?");
	scanf("%f", &ki);

	float total_min = 60.0 / minute;    //소요시간 (시)
	ki *= total_min;

	if (ki > 100)
	{
		printf("평균 속력은 %.1f km/h입니다. 구간 단속 과속입니다.", ki);
	}
	else
	{
		printf("평균 속력은 %.1f km/h입니다. 구간 단속 과속이 아닙니다.", ki);
	}
}


int main()
{
	solve();
	return 0;
}