
#include"student.h"
void find()
{
	if (student_number != 0)
	{
		printf("请输入查找学生的学号");
		int ID;
		scanf("%d", &ID);
		int i=0;
		for ( i = 0; i < student_number; i++)
		{
			if (ID == stu[i].ID)
			{
				printf("学号：%d\t姓名：%s\t性别：%s\t数学:%d\t英语：%d\t计算机：%d\n",
					stu[i].ID, stu[i].name, stu[i].sex, stu[i].a, stu[i].b, stu[i].c);
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
		printf("没有学生的信息\n");
	}
}
