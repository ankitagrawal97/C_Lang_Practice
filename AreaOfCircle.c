/*Calculate the area of circle*/
#include<stdio.h>
#include<math.h>
void main()
{
    int r ;
    float area;
    printf("Enter radius: ");
    scanf("%d", &r);
    area = (3.14)*(pow(r,2));
    printf("Area of Circle :  %f\n", area);
    printf("Roll no : 171210010");
}
