#include <iostream>
using namespace std;
int main()
{
  int sum = 0;

  for(int i = 1; i <= 1000; i++)
  {
    if(i % 3 == 0)
    {
      sum = sum + i;
    }
  }

  printf("The sum of multiples of 3 from 1 to 1000 is %d", sum);

  return 0;
}
