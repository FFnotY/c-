//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	&a;
//	return 0;
//}


//判断一个数是否为奇数

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("奇数\n");
//	}
//	else
//	{
//		printf("偶数\n");
//	}
//	return 0;
//}


//输出1到100之间的奇数
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