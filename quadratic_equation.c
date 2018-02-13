//CSC414 ASSIGNMENT
//UNUIGBOKHAI GODSWILL
//COS/0073/2014
//QUADRATIC EQUATION
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//declaration of elements
   double a, b, c,real,determinant,x1,x2,imaginaryPart;
   
   printf("Enter the value of a: ");
    scanf("%lf",&a);
    
    printf("Enter the value of b: ");
    scanf("%lf",&b);
    
    printf("Enter the value of c: ");
    scanf("%lf",&c);
   
   // determinant calculation
   determinant = b*b-4*a*c;
   real = -b/(2*a);
   
    //real and different roots
   if (determinant > 0)
   {
      x1 = real + sqrt(determinant)/(2*a);
      x2 = real -sqrt(determinant)/(2*a);
      printf("\nx1 = %f \nx2 = %f",x1 , x2);
      
   }
   
    //real and equal roots
   else if (determinant == 0)
   {
       printf("Roots are real and equal\n");
       x1 = -b/(2.0*a);
       x1 = x2;
       printf("x1 = %f\n", x1);
       printf("x2 = %f\n", x2);
    }

    //not real 
   else
   {
      imaginaryPart = sqrt(-determinant)/(2*a);
      printf("\nx1 = %f + %fi \nx2 = %f - %fi", real, imaginaryPart, real, imaginaryPart);
    }

    return 0;
} 
