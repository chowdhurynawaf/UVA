//
//  main.cpp
//  11716
//
//  Created by as on 5/18/20.
//  Copyright © 2020 as. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
    int t;
    int sq;
    string inp;
    
    cin >> t;
    cin.ignore(100, '\n');
    
    while (t--) {
        getline(cin, inp);
        
        sq = sqrt(inp.size());
        
        if (sq * sq != inp.size()) {
            cout << "INVALID" << endl;
            continue;
        }
        
        for (int i = 0; i < sq; i++) {
            for (int j = 0; i + j * sq < inp.size(); j++) {
                cout << inp[i + j * sq];
            }
        }
        cout << endl;
    }
    
    return 0;
}
