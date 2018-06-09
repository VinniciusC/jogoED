#include <iostream>
#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif
#pragma once

void refresh(){
	if (system("CLS")) system("clear");
}


