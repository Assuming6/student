#pragma once
#include<stdio.h>
#include<stdlib.h>
#include"student.h"
#include<string.h>
void showstudent()
{
	if (student_number != 0)
	{
		printf("��ѡ������˳��\n1.�ֽܷ�������\n2ѧ����������\n");
		int choice = 0;
		scanf("%d", &choice);
		if (choice == 1)
		{

			for (int i = 0; i < student_number - 1; i++)
			{
				int index = i;
				for (int j = i + 1; j < student_number; j++)
				{
					if (stu[i].total < stu[j].total)
					{
						index = j;
					}
				}

				if (i != index)
				{
					int temp = 0;
					temp = stu[i].a;
					stu[i].a = stu[index].a;
					stu[index].a = temp;
					temp = stu[i].b;
					stu[i].b = stu[index].b;
					stu[index].b = temp;
					temp = stu[i].c;
					stu[i].c = stu[index].c;
					stu[index].c = temp;
					temp = stu[i].total;
					stu[i].total = stu[index].total;
					stu[index].total = temp;
					temp = stu[i].ID;
					stu[i].ID = stu[index].ID;
					stu[index].ID = temp;
					char t[10] = { 0 };
					strcpy(t, stu[i].name);
					strcpy(stu[i].name, stu[index].name);
					strcpy(stu[index].name, t);
					strcpy(t, stu[i].sex);
					strcpy(stu[i].sex, stu[index].sex);
					strcpy(stu[index].sex, t);
				}
			}



		}
		else if (choice == 2)
		{
			for (int i = 0; i < student_number - 1; i++)
			{
				int index = i;
				for (int j = i+1; j < student_number; j++)
				{
					if (stu[i].ID > stu[j].ID)
					{
						index = j;
					}
					
				}
				if (i != index)
				{
					int temp = 0;
					temp = stu[i].a;
					stu[i].a = stu[index].a;
					stu[index].a = temp;
					temp = stu[i].b;
					stu[i].b = stu[index].b;
					stu[index].b = temp;
					temp = stu[i].c;
					stu[i].c = stu[index].c;
					stu[index].c = temp;
					temp = stu[i].total;
					stu[i].total = stu[index].total;
					stu[index].total = temp;
					temp = stu[i].ID;
					stu[i].ID = stu[index].ID;
					stu[index].ID = temp;
					char t[10];
					strcpy(t, stu[i].name);
					strcpy(stu[i].name, stu[index].name);
					strcpy(stu[index].name, t);
					strcpy(t, stu[i].sex);
					strcpy(stu[i].sex, stu[index].sex);
					strcpy(stu[index].sex, t);
				}
			}
		}
		for (int i = 0; i < student_number; i++)
		{
			printf("ѧ�ţ�%d\t������%s\t�Ա�%s\t��ѧ:%d\tӢ�%d\t�������%d\t�ܷ֣�%d\n",
				stu[i].ID, stu[i].name, stu[i].sex, stu[i].a, stu[i].b, stu[i].c, stu[i].total);
		}
	}
	else
	{
		printf("��¼Ϊ��\n");
	}
}
