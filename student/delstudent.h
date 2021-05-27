
#include"student.h"
#include<string.h>
void delstudent()
{
	if (student_number != 0)
	{
		int ID = 0;
		printf("请输入要删除的学生 学号");
		scanf("%d", &ID);
		int i = 0;
		for (i = 0; i < student_number; i++)
		{
			if (ID == stu[i].ID)
			{
				int j = i;
				for (j = i; j < student_number; j++)
				{
					stu[j].a = stu[j + 1].a;
					stu[j].b = stu[j + 1].b;
					stu[j].c = stu[j + 1].c;
					stu[j].ID = stu[j + 1].ID;
					strcpy(stu[j].name, stu[j + 1].name);
					strcpy(stu[j].sex, stu[j + 1].sex);
				}
				printf("删除成功\n");
				student_number--;
				break;
			}
		}
		if (i == student_number)
		{
			printf("查无此人\n"); 
		}
	}
	else
	{
		printf("没有学生数据\n");
	}
}
