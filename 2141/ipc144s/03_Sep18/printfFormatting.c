#include <stdio.h>

int main(int argc, char **argv)
{
   char 
      c = 'A';
   int 
      b = 100;
   double 
      a = 1234.234567;
	printf("char is <%c> int is <%d> and the double is <%lf>\n",c, b, a);
	printf("char is <%c> int is <%d> and the double is <%.2lf>\n",c, b, a);
	printf("char is <%c> int is <%d> and the double is <%.4lf>\n",c, b, a);
	printf("char is <%c> int is <%d> and the double is <%.4lf>\n",c, b, a);
	printf("char is <%5c> int is <%5d> and the double is <%5.4lf>\n",c, b, a);
	printf("char is <%5c> int is <%5d> and the double is <%10.2lf>\n"
          ,c, b, a);
	printf("char is <%05c> int is <%05d> and the double is <%010.2lf>\n"
          ,c, b, a);
	printf("char is <%-5c> int is <%-5d> and the double is <%-10.2lf>\n"
          ,c, b, a);
	return 0;
}
