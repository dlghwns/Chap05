/* ���ϸ�: ProAss01.c

 * ����: Programming Assignment. �µ��� �Է¹޾� ���� �µ��� ȭ�� �µ���, ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�. 
								"27 C" �Ǵ� 27 F"ó�� �µ��� �Է¹��� �� �������� ȭ������ ������ �� �ִ� ���ڸ� �Բ� �Է¹޴´�. 
								�Բ� �Էµ� ���ڰ� 'C'�� ���� �µ��̹Ƿ� ȭ�� �µ��� ���ؼ� ����ϰ�,
								�Էµ� ���ڰ� 'F'�� ȭ�� �µ��̹Ƿ� ���� �µ��� ���ؼ� ����Ѵ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025.4. 8

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : 
 * ��ȯ : ����
 */


int solve()
{
	char ch;
	float temp = 0.0;
	
	float result = 0.0;

	printf("�µ�? ");
	scanf("%d %c", &temp, &ch);

	if (ch == "c" || ch == "C")
	{ //ȭ���µ� ���ϱ�.
		result = (temp - 32) * (5 / 9);

		printf("%d F ==> %d C\n", temp, result);
	}

	else if (ch == "f" || ch == "F")
	{ //�����µ� ���ϱ�.
		result = (temp * (9 / 5)) + 32;

		printf("%d C ==> %d F\n", temp, result);
	}

}


int main()
{
	solve();
	return 0;
}