#include"student.h"
#include"Addstudent.h"
#include"showstudent.h"
#include"savestudent.h"
#include"initstudent.h"
#include"delstudent.h"
#include"findstudent.h"
#include"failstudent.h"
#include"emptystudent.h"

int main()
{
	initstudent();
	while (1)
	{
		printf("��ӭʹ��ѧ���ɼ�����ϵͳ\n");
		printf("1.���ѧ����Ϣ\n");
		printf("2.��ʾѧ���ɼ�\n");
		printf("3.�鿴ĳ��ѧ���ɼ�\n");
		printf("4.�鿴���ϸ�ѧ��\n");
		printf("5.ɾ��ѧ����Ϣ\n");
		printf("6.����ļ���Ϣ\n");
		printf("0.�˳�ϵͳ\n");
		int choice = 0;
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
		{
			Addstudent();
			save();
			system("pause");
			system("cls");
			break;
		}
		case 2:
		{
			showstudent();
			system("pause");
			system("cls");
			break;
		}
		case 3:
		{
			find();
			system("pause");
			system("cls");
			break; 
		}
		case 4:
		{
			find_failstudent();
			system("pause");
			system("cls");
			break; 
		}
		case 5:
		{
			delstudent();
			save();
			system("pause");
			system("cls");
			break; 
		}
		case 6:
		{
			emptystudent();
			system("pause");
			system("cls");
			break;
		}
		case 0:
		{
			printf("��ӭ�´�ʹ��\n");
			system("pause");
			exit(0);
			break;
		}

		default:

		{
			printf("��������ȷ��ѡ��\n");
			system("pause");
			system("cls");
			break;

		}

		}
	}
	return 0;
}

