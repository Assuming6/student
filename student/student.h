#pragma once
#include<stdio.h>
#include<stdlib.h>

struct student
{
	int ID;
	char name[10];
	char sex[10];
	int a;  //数学成绩
	int b;  //英语成绩
	int c;  //计算机成绩
	int total;//总分
};
struct student stu[40] = { 0 }; 
int student_number=0;//记录学生人数