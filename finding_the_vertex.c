#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float x, b, a, y, c, f, s;
	char text[4];
	int chek = 0;
	int comp;
	FILE *data = fopen("data.txt","w");
	fprintf(data,"----------------------\n\n");
	printf("What is A: ");
	scanf("%f", &a);
	printf("A is entered as: %f \n", a);
	printf("what is B: ");
	scanf("%f", &b);
	printf("B is entered as: %f \nwhat is C: ", b);
	scanf("%f", &c);
	fprintf(data,"The function values of A is: %f\nThe value of B is: %f\nThe value of C is: %f\n\n",a,b,c);
	x = -(b/(2 * a));
	float foq(float t){
		float r = (a * (t)*(t) + (b * t)) + c;
		return r;
		}
	void writ(float x,float y, char speak[100]){
		fprintf(data,"The x value is: %f\nThe y value is: %f\n",x,y);
		fprintf(data,"%s\n\n",speak);
	}
	y = foq(x);
	writ(x,y,"This is the vertex");
	f = x - 1;
	float fy = foq(f);
	writ(f,fy,"This is the zeroth set");
	float g = x - 2;
	float gy = foq(g);
	writ(g,gy,"This is the first set");
	s = x + 1;
	float sy = foq(s);
	writ(s,sy,"This is the second set");
	float k = x + 2;
	float ky = foq(k);
	writ(k,ky,"This is the third set");
	printf("The data has been saved in a file called data.txt\n");
	fprintf(data, "----------------------");
	fclose(data);
	printf("Type yes to exit (or no to debug): ");
	scanf("%s",&text);
	while(chek == 0){
		char firs;
		firs = text[0];
		char secd;
		secd = text[1];
		char thrd;
		thrd = text[2];
		if(firs == 'y' && secd == 'e' && thrd == 's'){
			printf("okay exiting");
			chek = 1;
		}
		else{
		/*	printf("this is currently being worked on type anything to go back to exit: ");
			scanf("%i",&comp);
			if(comp == 0){
			}
			else{
			}	*/
			printf("(Debugger still working on this) to exit out of this debugger type yes: ");
			scanf("%s",&text);
		}
	}
	return 0;
}	
