//
//  main.cpp
//  11479
//
//  Created by as on 5/12/20.
//  Copyright © 2020 as. All rights reserved.
//

#include<iostream>
using namespace std ;

int main(){


long long a , b, c , t ,count = 1;

cin >> t ;


for(int i=0 ; i<t ; i++){

cin >> a >> b >> c ;

if(a+b<=c||b+c<=a||a+c<=b||(a<=0||b<=0||c<=0)){
cout << "Case " << count <<":"  << " InvalidEquilateral" << endl ;
count++;
}
else if(a==b&&b==c){
cout << "Case " << count <<":"  << " Equilateral" << endl ;
count++;

}
else if(a==b||b==c||a==c){
cout << "Case " << count <<":"  << " Isosceles" << endl ;
count++;

}
else{
cout << "Case "<<count<<":" << " Scalene" << endl ;
count++;

}



}


}
