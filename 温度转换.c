#include <stdio.h>
void Tempture(double F);
int main()
{
	double F;
	int ret;
	printf("请输入华氏温度：");
	ret=scanf("%lf",&F);
	while(ret==1){
		Tempture(F);
		printf("请输入下一个华氏温度：（否则请输入任意字母）");
		ret=scanf("%lf",&F);
	}
printf("结束!");
return 0;
}
void Tempture(double F){
	const double F_to_C=32.0;
	const double F_to_K=273.16;
	double C,K;
	C=5.0/9.0*(F-F_to_C);
	K=C+F_to_K;
	printf("华氏温度：%.2f\n摄氏温度：%.2f\n开氏温度：%.2f\n",F,C,K);
}
