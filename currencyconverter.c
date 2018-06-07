#include<stdio.h>
#include<stdlib.h>

	#define Swiss_Franc_rate 0.0672;
	#define British_Pounds_rate 1.4320;
	#define Japanese_Yen_rate 0.0081;
	#define Canadian_Dollar_rate 0.6556;
	#define Euros_rate 0.8923;

void dashbar ()
{
	int i=1;

	while (i < 50)
	{
		putchar ('-');
		i=i+1;
	}
}

int disp_menu()
{
   int choice;
	printf("------------------------------\n\n");
	printf("	Currency Conversion\n");
	printf("------------------------------\n\n");
        printf("1) Swiss Franc          \n");
        printf("2) British Pound        \n");
        printf("3) Japanese Yen         \n");
        printf("4) Canadian Dollar      \n");
        printf("5) Euro         \n");
        printf("6) Exit the program     \n");
	printf("Enter a number 1-6 ---->");

	scanf("%d",&choice);

 while((choice<1) || (choice>6))
  {
        printf("Invalid entry, please Enter 1-6:");
        scanf("%i",&choice);
  }
return choice;
}


int main()
{
	float Swiss_Franc;
	float British_Pounds;
	float Japanese_Yen;
	float Euros;
	float Canadian_Dollar;
	float USD;
	int choice;

choice = disp_menu();

	while (1)
	{
	  switch (choice)
	  {
	  case 1:
		printf("Please enter the amount: ");
		scanf("%f",&Swiss_Franc);

		USD = Swiss_Franc/Swiss_Franc_rate;
		printf("%f Swiss Franc = %f US dollars\n", Swiss_Franc, USD);
		break;

	  case 2:
		printf("Please enter the amount: ");
		scanf("f%",&British_Pounds);

		USD = British_Pounds/British_Pounds_rate;
		printf("%f British Pounds = %f US dollars\n", British_Pounds, USD);
		break;
	  case 3:
		printf("Please enter the amount: ");
		scanf("f%",&Japanese_Yen);

		USD = Japanese_Yen/Japanese_Yen_rate;
		printf("%f Japanese Yen = %f US dollars\n", Japanese_Yen, USD);
		break;
	  case  4:
		printf("Please enter the amount: ");
		scanf("%f",&Canadian_Dollar);

		USD = Canadian_Dollar/Canadian_Dollar_rate;
		printf("%f Canadian Dollar = %f US dollars\n", Canadian_Dollar, USD);
		break;

	  case 5:
		printf("Please enter the amount: ");
		scanf("%f",&Euros);

		USD = Euros/Euros_rate;
		printf("%f Euros = %f US dollars\n", Euros, USD);
		break;
	  case 6:
		printf("Exiting program...\n");
		printf("Goodbye!\n");
		exit(0);
		break;
	  }
	  choice = disp_menu();
	}
	return 0;
}

