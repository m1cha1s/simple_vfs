#include <stdio.h>
#include "path.hpp"

int main() {
  auto path = vfs::Path("/test/hello/world");
  path.cd("test2");

  printf("%s\n", path.to_string().c_str());
}