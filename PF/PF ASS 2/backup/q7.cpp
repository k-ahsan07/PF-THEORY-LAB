#include<stdio.h>
#include<math.h>
int main()
{
    int x1, y1, x2, y2, x3, y3,x4,y4;
	float m,n,o;
    

    printf("Enter the co-ordinates of first point (X1, Y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the co-ordinates of second point (X2, Y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the co-ordinates of third point (X3, Y3): ");
    scanf("%f %f", &x3, &y3);
     printf("Enter the co-ordinates of fourth point (X4, Y4): ");
    scanf("%f %f", &x4, &y4);
    
    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/(x3-x2);
    o=(y4-y3)/(x4-x3);
  
    
    if(m==n && n==o && m==o || m==n || m==o )
    {
        printf("All the Four points fall on one straight line.");
    }
    else
        printf("All the Four points are not present on one straight line.");
    }
