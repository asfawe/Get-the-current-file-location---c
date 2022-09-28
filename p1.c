#include <stdio.h>
// fgetpos() 함수가 선언되어 있는 stdio.h를 포함합니다.

// fgetpos() 함수의 원형은 다음과 같습니다. 

// int fgetpos(FILE *stream, fpos_t *pos);

// 현재 파일 포인터의 위치를 구합니다. 

void main(void)
{
	FILE *fp;
	fpos_t pos;
	
	fp = fopen("c:\\temp\\file.txt", "w+");
	
	if(fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		fputs("abcde", fp);
		fgetpos(fp, &pos);
		printf("파일 포인터의 위치 : %d \n", pos);
		fclose(fp);
	}
}


