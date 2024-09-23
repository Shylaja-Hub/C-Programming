#include <stdio.h>
int main()
{
int width;
int height;

int area;
int perimeter;
printf("enter the height : ");
scanf("%d",&height);
printf("enter the width ; ");
scanf("%d",&width);


    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);

	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);

return(0);
}
