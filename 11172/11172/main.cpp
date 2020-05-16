//
//  main.cpp
//  11172
//
//  Created by as on 5/12/20.
//  Copyright © 2020 as. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int t , a , b;
    
    
    cin >> t ;
    
    for (int i = 0 ; i<t ; i++){
        cin >> a >> b ;
        
        if (a == b) {cout << "=" << endl;}
        else if(a<b){cout << "<" << endl ;}
        else if (a>b){cout << ">" << endl;}
    }
}
