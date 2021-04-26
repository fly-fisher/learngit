#include <stdint.h>
gott  晚上好
using namespace std;
nihaoa
1111111111111
void wrt1()
{

}

void wrt()
{

}
tme
ff
nihaoa

nicainicai

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

void func_feature2()
{
 printf("feature2\n");
}

int main(int argc, char *argv[])
{
  func_feature1();
  func_master2();
  func_feature2();
  return 0;
}
