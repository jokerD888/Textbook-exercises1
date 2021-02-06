#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//7.12

//int main(void)
//{
//	char arr[5][10] = { "红","黄","蓝","白","黑" };
//	char arr1[3][10] = { 0 };
//	int i,j,k;
//	for (i = 0; i < 5; i++)
//	{
//		strcpy(arr1[0], arr[i]);
//		for (j = 0; j < 5; j++)
//		{
//			
//			strcpy(arr1[1], arr[j]);
//			if (strcmp(arr1[0], arr1[1])==0)
//			{
//				j++;
//				continue;
//			}
//			for (k = 0; k < 5; k++)
//			{
//
//				strcpy(arr1[2], arr[k]);
//				if ((strcmp(arr1[0], arr1[2]) == 0) || (strcmp(arr1[1], arr1[2]) == 0))
//				{
//					k++;
//					continue;
//				}
//				printf("%s,%s,%s\n", arr1[0], arr1[1], arr1[2]);
//			}
//		}
//	}
//	return 0;
//}

//7.9判断是否是"回文"
//int main(void)
//{
//	int i,N=1;
//	char str[80] = { 0 };
//	char* pStart, * pEnd;
//	int len;
//	printf("Please erter character string:\n");
//	gets(str);
//	len = strlen(str);
//	pStart = str;
//	pEnd = str + len - 1;
//	/*for (i = 0; i < len / 2; i++)
//	{
//		if (*pStart!= *pEnd)
//		{
//			N = 0;
//			printf("No!\n");
//			break;
//		}
//	}
//	if (N) printf("Yes!");*/
//	////或
//	while ((*pStart == *pEnd) && (pStart < pEnd))
//	{
//		pStart++;
//		pEnd--;
//	}
//	if (pStart < pEnd)
//	{
//		printf("%No!\n");
//	}
//	else printf("Yes!\n");
//	return 0;
// }

//7.11 指针数组输出月份
int main(void)
{
	char *month[] = { "January","February","March","April","May","June",
						"July","Augest","September","October","November","December"};
	int input;
	printf("Please enter month of number:");
	scanf("%d", &input);
	if (input >= 1 && input <=12)
	{
		printf("%s\n", month[input-1]);
	}
	else printf("Illegal month!\n");
	return 0;
}