#include <iostream>
#include <string>

int main()
{
  int x;
  int y;
  int add_xy;
  int sub_xy;
  int mult_xy;
  int div_xy
  int mod_xy;

  x = 25;
  y = 5;
add_xy = x+y;
sub_xy = x - y;
std::cout << add_xy << std::endl
<< sub_xy << std::endl
<<mult_xy << std::endl
<<div_xy << std::endl
<<mod_xy << std:endl;

  //Exercise 2
  bool isSunny = true;
  bool hasUmbrella = false;
  std::cout << (iSunny && hasUmbrella) << std::endl;

  bool sun_or_umb = isSunny || hasUmbrella;
  std::cout << sun_or_umb << "\n";

  return 0;
}
