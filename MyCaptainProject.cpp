#include<stdio.h>
main()
{
	printf("Pick a number : ");
	int choice=0;
	scanf("%d",&choice);
	
	switch(choice)
	{
	    case 1: printf("The food item is Pizza.\nPrice - Rs 239");
		break;
		case 2: printf("The food item is Burger.\nPrice - Rs 129");
		break;
		case 3: printf("The food item is Pasta.\nPrice - Rs 179");
		break;
		case 4: printf("The food item is French Fries.\nPrice - Rs 99");
		break;
		case 5: printf("The food item is Sandwich.\nPrice - Rs 149");
		break;
		default: printf("Invalid choice");
	}
}

	
