#pragma once
#include"student.h"
void find_failstudent()
{
	if (student_number != 0)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < student_number; i++)
		{
			if ((stu[i].a < 60 && stu[i].b < 60)
				|| (stu[i].a < 60 && stu[i].c < 60)
				|| (stu[i].b < 60 && stu[i].c < 60))
			{
				j++;
				printf("ѧ�ţ�%d\t������%s\t�Ա�%s\t��ѧ:%d\tӢ�%d\t�������%d\t�ܷ֣�%d\n",
					stu[i].ID, stu[i].name, stu[i].sex, stu[i].a, stu[i].b, stu[i].c, stu[i].total);
			}
		}
		if (j == 0)
		{
			printf("����ѧ����������");
		}
	}
	else
	{
		printf("û��ѧ����Ϣ\n");
	}
}
