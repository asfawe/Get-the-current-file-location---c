#include <stdio.h>
// fgetpos() �Լ��� ����Ǿ� �ִ� stdio.h�� �����մϴ�.

// fgetpos() �Լ��� ������ ������ �����ϴ�. 

// int fgetpos(FILE *stream, fpos_t *pos);

// ���� ���� �������� ��ġ�� ���մϴ�. 

void main(void)
{
	FILE *fp;
	fpos_t pos;
	
	fp = fopen("c:\\temp\\file.txt", "w+");
	
	if(fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fputs("abcde", fp);
		fgetpos(fp, &pos);
		printf("���� �������� ��ġ : %d \n", pos);
		fclose(fp);
	}
}


