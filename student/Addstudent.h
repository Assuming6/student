#pragma once
#include"student.h"
void Addstudent()  
{
	printf("��Ҫ��Ӽ���ѧ��");
	int a=0;
	scanf("%d", &a);
	int i = 0;
	for (i = student_number; i < student_number + a; i++)
	{
		printf("�������%d��ѧ��ѧ��", i + 1);
		scanf("%d", &stu[i].ID);
		printf("�������%d��ѧ������", i + 1);
		scanf("%s", stu[i].name);
		printf("�������%d��ѧ���Ա�", i + 1);
		scanf("%s", stu[i].sex);
		printf("�������%d��ѧ���ɼ� ��ѧ  Ӣ��  �����", i + 1);
		scanf("%d%d%d", &stu[i].a, &stu[i].b, &stu[i].c);
		stu[i].total =stu[i].a+ stu[i].b+ stu[i].c;
	}
	printf("��ӳɹ�\n");
	student_number = student_number + a;
}
