#include <stdio.h>
#include <math.h>
#include <interp.h>



int main()
{
 
  /*
  
  Example 3x3 non equidistant grid data.
  
  
  1---0---1
  |   |   |
  1---2---3
  |   |   |
 -1---1---1
 
 NOTE: in C you store columns first
 */
  
  
  
  const double dat[3][3] = {{-1.0,1.0,1.0},{1.0,2.0,0.0},{1.0,3.0,1.0}};
  const double xTBL[3] = {0.0,0.6,1.0};
  const double yTBL[3] = {0.0,0.1,1.0};
  
  double x=0.05, y=0.05;
  double f;
  int i,j;
  
  
  for(i=0;i<=20;i++)
    for(j=0;j<=20;j++)
    {
      x=0.1*i;
      y=0.1*j;
      
      f = bilinear_interp_arbitrary_grid(x,y,dat, xTBL,3, yTBL, 3, 0, 0.0);
  
      printf("%lf\t%lf\t%lf\n",x,y,f);
      
    }
  
  return 0;
}