//
//  main.cpp
//  11689
//
//  Created by as on 5/14/20.
//  Copyright © 2020 as. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int e, f, c, tc, a, b, i, sum;

    cin >> tc ;
    for(i = 0; i < tc; i++)
    {
        cin >> e >> f >> c ;
        a = e + f;
        b = c;

        sum = 0;
        while(a >= b)
        {
            sum = sum + (a / b);
            a = (a / b) + (a % b);
        }
        cout << sum << endl;

    }
    


    return 0;
}
