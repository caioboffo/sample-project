#include "myadd.h"
#include <iostream>
#include "helper.h"

int main() {
  MyAdd add_obj;
  Helper h;
  std::cout << "Addition Result:" << add_obj.add(1, 1) << std::endl;
}
