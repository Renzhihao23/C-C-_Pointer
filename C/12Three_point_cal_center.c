#include <stdio.h>
float xx0,yy0,xx1,yy1,xx2,yy2;
float xy(float x0,float y0,float x1,float y1,float x2,float y2)
	{
	float mx0,my0,k0,b0,b1; 
	float mx1,my1,k1,b2,b3;
	float ax,ay;
	float kk0,kk1;
	
	mx0=(x0+x1)/2;
	my0=(y0+y1)/2;
	k0=(y1-y0)/(x1-x0);
	b0=y0-k0*x0;
	if(k0==0)
		{
		kk0=0; 
		}
	else{
		kk0= -1/k0;
		} 
	b1=my0-(kk0)*mx0;
	//printf("kk0 and b1\n ");
	//printf("%f\n%f\n",kk0,b1);
 
	mx1=(x0+x2)/2;
	my1=(y0+y2)/2;
	k1=(y2-y0)/(x2-x0);
	b2=y0-k1*x0;
		if(k1==0)
		{
		kk1=0; 
		}
	else{
		kk1= -1/k1;
		} 
	b3=my1-(kk1)*mx1;
	//printf("kk1 and b3\n ");
	//printf("%f\n%f\n",kk1,b3);
	
	ax=(-(b3-b1))/(kk1-kk0);
	ay=kk0*ax+b1;
	//printf("ax and ay\n ");
	printf("%f\n%f\n",ax,ay);
	return 0;
	}
		 
int main() {
	scanf("%f%f",&xx0,&yy0);
	scanf("%f%f",&xx1,&yy1);
	scanf("%f%f",&xx2,&yy2);
	xy(xx0,yy0,xx1,yy1,xx2,yy2);
 
	return 0;
}