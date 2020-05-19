
  //main.cpp
  //11875

  //Created by as on 5/16/20.
  //Copyright © 2020 as. All rights reserved.


#include <iostream>
#include<algorithm>
using namespace std ;

int main(int argc, const char * argv[]) {
    // insert code here...

#ifndef ONLINE_JUDGE
    freopen("/Users/as/practice/c++\ practice/c++\ practice/uva/inp.txt","r",stdin);
    freopen("/Users/as/practice/c++\ practice/c++\ practice/uva/output.txt","w",stdout);
#endif
    int t , n ;

    int age[15] ;

    cin >> t ;

    for(int i = 0 ; i < t ; i++){

        cin >> n ;

        for(int j = 0 ; j<n ; j++){
            cin >> age[j] ;

        }
        
        sort(age , age+n) ;
        cout << "Case " << i+1 << ": " << age[n/2] << endl;
    }
}
