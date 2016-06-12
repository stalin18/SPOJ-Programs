//
//  main.cpp
//  FCTRL
//
//  Created by Kunal Swami on 13/06/16.
//  Copyright © 2016 SHREE-GANESH. All rights reserved.
//

#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t;
    int n, quo;
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        quo=0;
        
        for(int i=1;pow(5, i)<=n;i++){
            quo+= n/pow(5, i);
        }
        
        printf("%d\n", quo);
    }
    
    return 0;
}
