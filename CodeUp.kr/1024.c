#include <stdio.h>
#include <string.h>
int main()
{
	char a[21]="";
	int i,n;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		printf("\'%c\'\n",a[i]);
	}
	return 0;
}

/* 

https://codeup.kr/problem.php/?id=1024

1024 : [기초-입출력] 단어 1개 입력받아 나누어 출력하기(설명)

*/
