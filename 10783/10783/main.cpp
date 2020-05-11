


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

     int t ,a ,b ;
       
       cin >> t;
       
       for (int i = 0 ; i<t ; i++){
           cin >> a >> b ;
           
           
           int sum = 0 ;
           
           
           for (int j = a  ; j<=b ; j++){
               if (j%2 != 0){
                   sum += j;
               }
           }
           
           cout << "Case " << i+1 << ": " << sum <<  endl ;
       }
}

