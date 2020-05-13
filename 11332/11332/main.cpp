//
//  main.cpp
//  11332
//
//  Created by as on 5/13/20.
//  Copyright © 2020 as. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
  int num;
  int tmp;
    
  while (cin >> num) {
    if (num == 0)
      break;

    while (num > 9) {
      tmp = num;
      num = 0;

      while (tmp) {
        num += tmp % 10;
        tmp /= 10;

      }
    }

    cout << num << endl;
  }

  return 0;
}
