//
//  main.cpp
//  11547
//
//  Created by as on 5/17/20.
//  Copyright © 2020 as. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
   
    
    int t ;
    cin >> t ;
    
    while (t--) {
        int n ;
        cin >> n ;
        int f = n*567 ;
        int s = f/9 ;
        int th = s+7492 ;
        int fo = th*235 ;
        int fi = fo/47 ;
        int res = fi-498 ;
        
        res = res/10 ;
        
        res = res%10 ;
        
        
        
        if (res<0) {
            res=-res ;
            
        }
        
        cout << res <<endl;

        
    }

}
