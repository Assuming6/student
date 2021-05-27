#pragma once
#include"student.h" 
void emptystudent()
{
	if (student_number == 0)
	{
		printf("记录为空\n");
	}
	else
	{
		printf("确认要删除吗？\n1.确认  2.取消\n");
		int choice;
		scanf("%d", &choice);
		if (choice == 1)
		{
			FILE* fp;
			if ((fp = fopen("aaa.txt", "wb")) != NULL)
			{
				printf("数据已清空\n");
				student_number = 0;
			}
			else
			{
				printf("出错\n");
			}
		}
	}
}
