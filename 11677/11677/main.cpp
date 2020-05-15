//
//  main.cpp
//  11677
//
//  Created by as on 5/15/20.
//  Copyright © 2020 as. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    

    #ifndef ONLINE_JUDGE
        freopen("/Users/as/practice/c++\ practice/c++\ practice/uva/inp.txt","r",stdin);
        freopen("/Users/as/practice/c++\ practice/c++\ practice/uva/output.txt","w",stdout);
    #endif
    
    int h1 , m1 , h2 , m2 ;
    
    while (1) {
        cin >> h1 >> m1 >> h2 >> m2 ;
        
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0 ){
            break;
        }else{
            
            
            
            int t1 , t2   ;
            
            t1 = (h1*60) + m1;
            t2 = (h2*60) +m2 ;

            
            if (t2 > t1) {
             cout << abs(t2-t1) << endl;

            }else{
                cout << 24*60 - (t1-t2) << endl ;
            }
            
        }
    }
    
}
