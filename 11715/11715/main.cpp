//
//  main.cpp
//  11715
//
//  Created by as on 5/16/20.
//  Copyright © 2020 as. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std ;

int main(int argc, const char * argv[]) {
    
#ifndef ONLINE_JUDGE
    freopen("/Users/as/practice/c++\ practice/c++\ practice/uva/inp.txt","r",stdin);
    freopen("/Users/as/practice/c++\ practice/c++\ practice/uva/output.txt","w",stdout);
#endif
    // insert code here...
    
    long long n,count = 0;
    double u ,v,s ,t ,a ;
    
    while(cin >> n){
        if( n == 0 )
            break ;
        u = 0;
        v = 0;
        s = 0;
        t = 0;
        a = 0;
        count++ ;
        
        if(n==1){
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=((v*v)-(u*u))/(2*a);
            printf("Case %lld: %.3lf %.3lf\n",count,s,a);
        }
        if(n==2){
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=((v*v)-(u*u))/(2*a);
            printf("Case %lld: %.3lf %.3lf\n",count,s,t);
        }
        if(n==3){
            scanf("%lf %lf %lf",&u,&a,&s);
            v=sqrt((u*u)+(2*a*s));
            t=(v-u)/a;
            printf("Case %lld: %.3lf %.3lf\n",count,v,t);
        }
        if(n==4){
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;
            printf("Case %lld: %.3lf %.3lf\n",count,u,t);
        }
        
        
        
    }
}
