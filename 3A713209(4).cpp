
#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    int sec; 
    printf("�п�J��ơG");
    scanf("%d",&sec); 
    printf("�ഫ���ɶ���%02d��%02d��%02d��\n",sec/3600%60,sec/60%60,sec%60); 
	system("pause");
	return 0;
}
