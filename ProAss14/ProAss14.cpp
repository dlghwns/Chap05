/* ���ϸ�: ProAss.c

 * ����:
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 16

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) :
 * ��ȯ : ����
 */
void solve()
{
	float minute, ki = 0.0;

	printf("���� �ܼ� �ҿ� �ð�(��)? ");
	scanf("%f", &minute);
	printf("���� �ܼ� ���� �Ÿ� (km)?");
	scanf("%f", &ki);

	float total_min = 60.0 / minute;    //�ҿ�ð� (��)
	ki *= total_min;

	if (ki > 100)
	{
		printf("��� �ӷ��� %.1f km/h�Դϴ�. ���� �ܼ� �����Դϴ�.", ki);
	}
	else
	{
		printf("��� �ӷ��� %.1f km/h�Դϴ�. ���� �ܼ� ������ �ƴմϴ�.", ki);
	}
}


int main()
{
	solve();
	return 0;
}