//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	&a;
//	return 0;
//}


//�ж�һ�����Ƿ�Ϊ����

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("ż��\n");
//	}
//	return 0;
//}


//���1��100֮�������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num = 1;
//	while ( num <= 100)
//	{
//		if(num % 2 == 1)
//		{
//			printf("%d ", num);
//			
//		}
//		num++;
//	}
//
//	return 0;
//}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ch = getchar();
	printf("%c\n", ch);
	putchar(ch);

	return 0;
}