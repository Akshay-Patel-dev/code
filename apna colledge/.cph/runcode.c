
#include <stdio.h>
 #include <conio.h>
 
 int per(int x, int y) {
 
 
 while(x<=y)
 { 
     int  sum=0;
for( int i=1;i<x; i++)

{

if(x%i==0)

{

sum=sum+i;

if(x==sum)

printf("  % d",x);

}
}

x++;
}
 return 0;
}
 
 
 int main()
 {
      int x,i,y, sum=0;
 printf("lower limit");
 scanf("%d",&x);
 printf("higher limit");
 scanf("%d",&y);
 per(x,y);
 getch();
 return 0;
}