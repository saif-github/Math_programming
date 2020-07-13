/*

Series expansion of Cos(X)

cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ......

X in radians   1 degree = pi/180 , 30 degree = (30 * pi)/180

1! * 2 * 3 = 3!
2! * 3 * 4 = 4!

67! * 68 * 69 = 69!

1        *    -x^2/1 * 2  = -x^2/2!

-x^2/2!  *   -x^2/3* 4   =  +x^4/4!

+x^4/4!  *  -x^2/5 * 6  =  -x^6/6!

*/
// C Efficient program to calculate
#include <stdio.h>
#define PI 3.1415

// using sum of first n terms of Taylor Series
// Driver program to test above function
int main()
{
  printf("Enter angle in degree\n");
  float angle_degree = 0.0;
  scanf("%f",&angle_degree);
  float angle_radian = angle_degree*PI/180;
  float ans = 1;
  float temp = 1;
  int accuracy = 3;
  int i = 0;

  for(i=1;i<=2*accuracy;i+=2){
    temp = temp * (-1) * angle_radian* angle_radian/(i*(i+1));
    ans= ans + temp ;
  }
    printf("cos(%f) = %f\n",angle_degree,ans);
    return 0;
}
