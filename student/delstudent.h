
#include"student.h"
#include<string.h>
void delstudent()
{
	if (student_number != 0)
	{
		int ID = 0;
		printf("������Ҫɾ����ѧ�� ѧ��");
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
				printf("ɾ���ɹ�\n");
				student_number--;
				break;
			}
		}
		if (i == student_number)
		{
			printf("���޴���\n"); 
		}
	}
	else
	{
		printf("û��ѧ������\n");
	}
}
