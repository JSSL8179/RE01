#include <stdio.h>
void Tempture(double F);
int main()
{
	double F;
	int ret;
	printf("�����뻪���¶ȣ�");
	ret=scanf("%lf",&F);
	while(ret==1){
		Tempture(F);
		printf("��������һ�������¶ȣ�������������������ĸ��");
		ret=scanf("%lf",&F);
	}
printf("����!");
return 0;
}
void Tempture(double F){
	const double F_to_C=32.0;
	const double F_to_K=273.16;
	double C,K;
	C=5.0/9.0*(F-F_to_C);
	K=C+F_to_K;
	printf("�����¶ȣ�%.2f\n�����¶ȣ�%.2f\n�����¶ȣ�%.2f\n",F,C,K);
}
