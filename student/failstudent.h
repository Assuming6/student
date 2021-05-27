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
				printf("学号：%d\t姓名：%s\t性别：%s\t数学:%d\t英语：%d\t计算机：%d\t总分：%d\n",
					stu[i].ID, stu[i].name, stu[i].sex, stu[i].a, stu[i].b, stu[i].c, stu[i].total);
			}
		}
		if (j == 0)
		{
			printf("所有学生都及格了");
		}
	}
	else
	{
		printf("没有学生信息\n");
	}
}
