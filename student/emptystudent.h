#pragma once
#include"student.h" 
void emptystudent()
{
	if (student_number == 0)
	{
		printf("��¼Ϊ��\n");
	}
	else
	{
		printf("ȷ��Ҫɾ����\n1.ȷ��  2.ȡ��\n");
		int choice;
		scanf("%d", &choice);
		if (choice == 1)
		{
			FILE* fp;
			if ((fp = fopen("aaa.txt", "wb")) != NULL)
			{
				printf("���������\n");
				student_number = 0;
			}
			else
			{
				printf("����\n");
			}
		}
	}
}
