#include "z1.h"

int main()
{
  TimeSpan t(3936);
  
  std::cout << t.getHours() << "\n";
	std::cout << t.getMinutes() << "\n"
		  << t.getSeconds() "\n";
	t.print();
  
  return 0; 
}
