

#include <iostream>
#include <vector>
#include <math.h>

using namespace std ;

int main(int argc, const char * argv[]) {


    
    
    int a , b ;
    
    
    while(cin>> a >> b && a != 0 && b != 0){
        int count  = 0 ;
        
        for (int i = a ; i <= b ; i++){
            
            int tmp =  sqrt(i);
            if (i == pow(tmp,2)){
                count ++ ;
            }
        }
        cout << count << endl ;

    }
    
    
    
}
