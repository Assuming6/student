#include<stdio.h>
#include<stdlib.h>
#pragma once 
#include"student.h"
void save()
{
	FILE* fp;
	if ((fp = fopen("aaa.txt", "wb")) != NULL)
	{
		int i = 0;
		for (i = 0; i < student_number; i++)
		{
			fwrite(&stu[i], sizeof(struct student), 1, fp);
		}
		fclose(fp);
	}
}
