#include <stdint.h>

using namespace std;

void func_master()
{
  printf("func_master\n");
}

void func_master2()
{
  printf("func_master2\n");
}

void func_feature1()
{
  printf("feature1\n");
}


int main(int argc, char *argv[])
{
  func_feature1();
  func_master2();
  return 0;
}
