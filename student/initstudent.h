#pragma once
#include"student.h"
void initstudent()
{
	FILE* fp;
	if ((fp = fopen("aaa.txt", "rb")) != NULL)
	{
		int i=0;
		for ( i = 0; i < 10; i++)
		{
			char s= '0';
			s = fgetc(fp);
			if (s == EOF)
			{
				student_number = i ;
				printf("%d", student_number);
				break;
				
			}
			else
			{
				fseek(fp, -1L, 1);
			}
			fread(&stu[i], sizeof(struct student), 1, fp);
		}

	}
	else
	{
		fp = fopen("aaa.txt", "wb");
	}

	fclose(fp);
}
