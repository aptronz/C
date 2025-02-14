#include <stdio.h>

int main(void)
{
  int water;
  float total, surcharge;
  printf("Enter water consumption per month.\n");
  scanf("%d", &water);
  if((water<1000)&&(water>500))
  {
    surcharge=0.1*500;
  }
  else if(water>1000)
  {
    surcharge=(water-1000)*0.12+ 0.1*500;

  }
  else
  {
    surcharge=0;
  }
  total=(water*0.15)+surcharge;
  printf("Your total bill is : %.1f", total);
  return 0;
}

