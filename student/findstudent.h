
#include"student.h"
void find()
{
	if (student_number != 0)
	{
		printf("���������ѧ����ѧ��");
		int ID;
		scanf("%d", &ID);
		int i=0;
		for ( i = 0; i < student_number; i++)
		{
			if (ID == stu[i].ID)
			{
				printf("ѧ�ţ�%d\t������%s\t�Ա�%s\t��ѧ:%d\tӢ�%d\t�������%d\n",
					stu[i].ID, stu[i].name, stu[i].sex, stu[i].a, stu[i].b, stu[i].c);
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
		printf("û��ѧ������Ϣ\n");
	}
}
