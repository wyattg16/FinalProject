#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(void)

{
	char  unit1[50];
	char  unit2[50];
	float value1;
	printf("Enter the original unit\n Enter the number: Farenheit(1), Celisus(2), Meter(3), or Feet(4)\n");
	scanf("%s", unit1);
	printf("Enter the value of the unit you'd like to convert\n");
	scanf("%f", &value1);
	printf("Enter the unit you'd like to convert to\n Enter the number you want from the units above:\n");
	scanf("%s", unit2);

		if (strcmp (unit1,"1") == 0)
		{
			if (strcmp (unit2,"2") == 0)
			{
			float c,f;
			f = value1;
			c = (f - 32 * 5 / 9);
			printf("%f in Farenheit is %f in Celisus\n", f, c);
			}
		}
		else if (strcmp (unit1,"2") == 0)
		{
			if (strcmp (unit2, "1") == 0)
			{
			float c,f;
			c = value1;
			f = (c * 9/5 + 32);
			printf("%f in Celisus is %f in Farenheit\n", c, f);
			}
		}
		else if (strcmp (unit1,"3") == 0)
		{
			if (strcmp (unit2,"4") == 0)
			{
			float m,f;
			m = value1;
			f = (3.2808399 * m);
			printf("%f Meters is %f Feet\n", m, f);
			}
		}
		else if (strcmp (unit1,"4") == 0)
		{
			if (strcmp (unit2,"3") == 0)
			{
			float f,m;
			f = value1;
			m = (f / 3.28083999);
			printf("%f Feet is %f Meters\n", f, m);
			}
		}
		else 
		{
			printf("Units entered incorrectly try again\n");
		}
}
