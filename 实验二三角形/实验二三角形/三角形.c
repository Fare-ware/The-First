#include<stdio.h>
#include<math.h>
int main()
{double edge1, edge2, edge3;
printf("Enter theer edges of a triangle:");
scanf("%lf%lf%lf", &edge1, &edge2, &edge3 );
if (edge1<=0||edge2<=0||edge3<=0 )
{
printf("Error input!\n");
}
else
	if(edge1+edge2>edge3&&edge1+edge3>edge2&&edge3+edge2>edge1)
{
	if(edge1==edge2&&edge1==edge3)
	printf("This is �ȱ�������\n");
	else
		if(edge1==edge2||edge1==edge3||edge2==edge3)
	{
		if(fabs(edge1*edge1+edge2*edge2-edge3*edge3)<1E-2||fabs(edge1*edge1+edge3*edge3-edge2*edge2)<1E-2||fabs(edge3*edge3+edge2*edge2-edge1*edge1)<1E-2)
	printf("This is ����ֱ��������\n");
	
	else
		printf("This is ����������");}
	
	else
		if(fabs(edge1*edge1+edge2*edge2-edge3*edge3)<1E-2||
		fabs(edge1*edge1+edge3*edge3-edge2*edge2)<1E-2||
		fabs(edge3*edge3+edge2*edge2-edge1*edge1)<1E-2)
		{printf("%f,%f,%f is a right triangle.\n",edge1,edge2,edge3 );}
		else
	printf("%f,%f,%f is an ordinary triangle.\n",edge1,edge2,edge3 );
	}
    else
		printf("���ܹ���������");

return 0;
}