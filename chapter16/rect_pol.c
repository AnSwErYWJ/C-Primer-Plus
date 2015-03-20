#include<stdio.h>
#include<math.h>

#define RAD_TO_DEG (180/(4*atan(1)))//pi=4*atan(1)

typedef struct polar_y{
double magnitude;//与极点的距离
double angle;//角度
}POLAR_V;

typedef struct rect_v{
double x;
double y;
}RECT_V;

POLAR_V rect_to_polar(RECT_V);

int main(void)
{
	RECT_V input;
	POLAR_V result;
	puts("Enter x, y coordinates(enter q to quit): ");
	while(scanf("%lf %lf", &input.x, &input.y)==2)
	{
		result=rect_to_polar(input);
		printf("magnitude=%0.2f, angle=%0.2f\n", result.magnitude, result.angle);
	}
	puts("BYE!");
	return 0;
}

POLAR_V rect_to_polar(RECT_V rv)
{
	POLAR_V pv;
	pv.magnitude = sqrt(rv.x*rv.x+rv.y*rv.y);//开根
	if(pv.magnitude==0)//位于极点
		pv.angle=0.0;
	else
		pv.angle=RAD_TO_DEG * atan2(rv.y, rv.x);//atan2()返回弧度值，此为转换为角度的公式
	return pv;
}
