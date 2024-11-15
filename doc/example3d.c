#include <stdio.h>
#include <math.h>
#include <interp.h>



int main()
{
 /*
  const double dat[3][3][3] = 
  {
  {{0.0,0.0,0.0},{0.0,0.0,0.0},{0.0,0.0,0.0}},
  {{0.0,0.0,0.0},{0.0,1.0,0.0},{0.0,0.0,0.0}},
  {{0.0,0.0,0.0},{0.0,0.0,0.0},{0.0,0.0,0.0}}
  };

 
  const double dat[3][3][3] = 
  {
   {{-1, 0, 1}, {0, 0, 0}, {1, 0, -1}}, 
   {{0, 0, 0}, {0, 0, 0}, {0, 0,   0}}, 
   {{1, 0, -1}, {0, 0, 0}, {-1, 0, 1}}
  };
    */
  const double dat[3][3][3] = {{{1., 0., 0.}, {0., 1., 1.}, {1., 0., 1.}}, {{0., 0., 1.}, {1., 0., 
   1.}, {1., 1., 1.}}, {{0., 0., 1.}, {0., 1., 1.}, {0., 0., 1.}}};
  
  double x=0.05, y=0.05, z=0.05;
  double f;
  int i,j,k;
  
  
  for(i=-20;i<=20;i++)
    for(j=-20;j<=20;j++)
      for(k=-20;k<=20;k++)
       {
        x=0.05*i;
        y=0.05*j;
	z=0.05*k;
	
      
        f = trilinear_interp(x,y,z,dat,3,3,3,-1.0,1.0,-1.0,1.0,-1.0,1.0,0,0.0);
  
        printf("%lf\t%lf\t%lf\t%lf\n",x,y,z,f);
      
    }
  
  return 0;
}