//
//  main.cpp
//  11650
//
//  Created by as on 5/16/20.
//  Copyright © 2020 as. All rights reserved.
//

#include <iostream>
#include<cstdio>

using namespace std ;

void clock(int phr , int pmin ){
    
    
    int hr , minute ;
    
    if (phr == 12 || pmin == 6) {
        hr = phr ;
    }
    else{
        hr = 12 - phr ;
    }
    
    if (pmin == 0) {
        minute = pmin ;
    }
    else{
        minute = 60-pmin ;
        hr-- ;
    }
    if (hr == 0) {
        hr = 12 ;
    }
    
    printf("%02d:%02d\n",hr,minute);
}

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("/Users/as/practice/c++\ practice/c++\ practice/uva/inp.txt","r",stdin);
        freopen("/Users/as/practice/c++\ practice/c++\ practice/uva/output.txt","w",stdout);
    #endif


    int hour , min , t ;
    
    
    char ch ;
    
    cin >> t ;
    
    while (t--) {
        cin >> hour >> ch >> min ;
        
        clock(hour , min ) ;
    }


}
