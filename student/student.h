#pragma once
#include<stdio.h>
#include<stdlib.h>

struct student
{
	int ID;
	char name[10];
	char sex[10];
	int a;  //��ѧ�ɼ�
	int b;  //Ӣ��ɼ�
	int c;  //������ɼ�
	int total;//�ܷ�
};
struct student stu[40] = { 0 }; 
int student_number=0;//��¼ѧ������