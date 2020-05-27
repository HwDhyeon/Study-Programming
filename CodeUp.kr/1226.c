#include <stdio.h>
 
int main()
{
    int lotto_num[100], bonus;
    int sel_num[100];
    int i, num, cnt = 0, rank;
 
 
    for(i = 1; i <= 6; i++)
    {
        scanf("%d", &num);
        lotto_num[num] = 1;
    }
    scanf("%d", &bonus);
 
    for(i = 1; i <= 6; i++) {
        scanf("%d", &num);
        sel_num[num] = 1;
        if(lotto_num[num] == 1)
            cnt++;
    }
     
    switch(cnt)
    {
        case 6 :
            rank = 1; break;
        case 5 :
            if(sel_num[bonus] == 1)
                rank = 2;
            else
                rank = 3;
            break;
        case 4 :
            rank = 4; break;
        case 3 :
            rank = 5; break;
        default :
            rank = 0; break;
    }
 
    printf("%d\n", rank);
 
    return 0;
}

/* 

https://codeup.kr/problem.php/?id=1226

1226 : 이번 주 로또

*/
