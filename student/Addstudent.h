#pragma once
#include"student.h"
void Addstudent()  
{
	printf("你要添加几个学生");
	int a=0;
	scanf("%d", &a);
	int i = 0;
	for (i = student_number; i < student_number + a; i++)
	{
		printf("请输入第%d名学生学号", i + 1);
		scanf("%d", &stu[i].ID);
		printf("请输入第%d名学生姓名", i + 1);
		scanf("%s", stu[i].name);
		printf("请输入第%d名学生性别", i + 1);
		scanf("%s", stu[i].sex);
		printf("请输入第%d名学生成绩 数学  英语  计算机", i + 1);
		scanf("%d%d%d", &stu[i].a, &stu[i].b, &stu[i].c);
		stu[i].total =stu[i].a+ stu[i].b+ stu[i].c;
	}
	printf("添加成功\n");
	student_number = student_number + a;
}
