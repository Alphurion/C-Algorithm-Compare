#include <iostream>

#include "LinkedList.h"


int main()
{

  LinkedList<int> list;
  int x;

  while (std::cin >> x)
  {
    list.pushBack(x);
  }
}
