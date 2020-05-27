#include <stdio.h>
int main()
{
	char a[14]="";
	gets(a);
	for(int i=0;i<14;i++){
		if(a[i]=='-'){
			i++;
		}
		printf("%c",a[i]);
	}
	return 0;
}

/* 

https://codeup.kr/problem.php/?id=1020

1020 : [기초-입출력] 주민번호 입력받아 형태 바꿔 출력하기

*/
