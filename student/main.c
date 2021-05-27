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
		printf("欢迎使用学生成绩管理系统\n");
		printf("1.添加学生信息\n");
		printf("2.显示学生成绩\n");
		printf("3.查看某个学生成绩\n");
		printf("4.查看不合格学生\n");
		printf("5.删除学生信息\n");
		printf("6.清空文件信息\n");
		printf("0.退出系统\n");
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
			printf("欢迎下次使用\n");
			system("pause");
			exit(0);
			break;
		}

		default:

		{
			printf("请输入正确的选项\n");
			system("pause");
			system("cls");
			break;

		}

		}
	}
	return 0;
}

