#include <stdio.h>

void main()
  {
      float radius , diameter ,circumference , area;
      printf("Enter Radius of the circle:");
      scanf("%f",&radius);

      diameter=2*radius;
      circumference=2*3.14*radius;
      area=3.14*radius*radius;

      printf("\n Diameter of the circle is:" "%f",diameter);
      printf("\n Circumference of the circle is:" "%f",circumference);
      printf("\n Area of the circle is:" "%f",area);

  }
