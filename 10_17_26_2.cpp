#include<iostream>
#include<ctime>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
   srand(time(0));
   int ci = 0;
   for(int n = 1;n <= 10000;n++)
   {
   double y = ((double)rand() / RAND_MAX) * 2.0;
   double pi = acos(-1.0);
   double c = ((double)rand() / RAND_MAX) * pi;
   double yh = y + sin(c);
   if (yh >= 2)
   ci++;
   }
   double gai = 10000.0 / ci;
   cout << gai;

    return 0;

    
}