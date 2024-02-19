#include <stdio.h>
int main()
{

   int t;
   scanf("%d", &t);
   for (int i = 0; i < t; i++)
   {
      int a, b, c;
      long long mul;
      scanf("%lld %d %d %d", &mul, &a, &b, &c);
      long long mul1 = mul / (a * b * c);
      if ( mul % (a * b * c) == 0 )
      {
         printf("%lld\n", mul1);
         
      }
      else
         printf("-1\n");
   }

   return 0;
}