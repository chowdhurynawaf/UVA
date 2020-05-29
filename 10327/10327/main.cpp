//
//  main.cpp
//  10327
//
//  Created by as on 5/17/20.
//  Copyright © 2020 as. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace  std ;

int main(int argc, const char * argv[]) {


    int n  ;
    
    
    while(cin >> n ){
        
        
        vector<int> num(n);
        
        for(int i = 0 ; i < n ; i++){
            cin >> num[i] ;
        }
        
        int ct = 0 ;
        
        for(int i = 0 ; i < n ; i++){
            
            for(int j = i+1 ; j<n ; j++){
                
                if(num[i] > num[j] ){
                    ct++ ;
                }
            }
        }
        
        cout << "Minimum exchange operations : " << ct << "\n";
        
    }


}

