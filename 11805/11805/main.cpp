//
//  main.cpp
//  11805
//
//  Created by as on 5/14/20.
//  Copyright © 2020 as. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    
    
    long long int a , b , c ,t , count;
    
    cin >> t ;
    
    for (int i = 0 ; i < t ; i++) {
        
        count = 0 ;
        cin >> a >> b >> c ;
       
        
        while (c--) {
             
            if (b == a){
                b = 0 ;
            }
            b++ ;
        }
        
        cout << "Case " << i+1 << ": " << b << endl ;
        
        
        
        
        
    }
    
    
}
