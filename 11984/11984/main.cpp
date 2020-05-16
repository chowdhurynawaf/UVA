//
//  main.cpp
//  11984
//
//  Created by as on 5/16/20.
//  Copyright © 2020 as. All rights reserved.
//

#include <iostream>
#include<cstdio>
using namespace std ;

int main(int argc, const char * argv[]) {
    // insert code here...
    

    double t   ;
    
    int count = 1 ;
    cin >> t ;
    
    while (t--) {
        
        double c ,f ;
        cin >> c >> f ;
        
        
           double newC =  ((5.00/9.00)*f ) ;
            
            printf("Case %d: %.2f\n" ,count++ , newC + c) ;
       
        
        
        
    }


}
