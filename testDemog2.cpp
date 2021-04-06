#include "demogData.h"
#include <iostream>
#include "tddFuncs.h"
using namespace std;

int main() {
  cout << "Testing class county demographics..." << endl;

  /* will not work until student modifies class */
  demogData c1("Santa Barbara", "CA", 14.0, 22.4, 6.4, 31.3, 79.1);
  ASSERT_EQUALS("Santa Barbara",c1.getName());
  ASSERT_EQUALS("CA",c1.getState());
  ASSERT_EQUALS(14.0,c1.getpopOver65());
  ASSERT_EQUALS(22.4,c1.getpopUnder18());
  ASSERT_EQUALS(6.4,c1.getpopUnder5());
  ASSERT_EQUALS(31.3,c1.getBAup());
  ASSERT_EQUALS(79.1,c1.getHSup());

  return 0;
}
