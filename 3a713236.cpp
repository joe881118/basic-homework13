#include<stdio.h> 
#include<stdlib.h>
int main()
{
    int m,w;
	printf("請輸入男生年紀: \n");
	scanf("%d",&m);
	printf("請輸入女生年紀: \n");
	scanf("%d",&w);


   if(m>=18&&w>=16)
   printf("恭喜你們可以結婚\n");
   else
   printf("哭哭等毛長齊在結婚吧\n");
   system("PAUSE");
   return 0;

}
