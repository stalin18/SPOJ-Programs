//
//  main.cpp
//  ADDREV
//
//  Created by Kunal Swami on 13/06/16.
//  Copyright © 2016 SHREE-GANESH. All rights reserved.
//

#include<stdio.h>
#include<iostream>

using namespace std;

int reverse(int n);

int main(){
    int n;
    int a, b;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d%d", &a, &b);
        
        printf("%d\n", reverse(reverse(a)+reverse(b)));
    }
    
    return 0;
}

int reverse(int n){
    int rev_no = 0;
    
    while(n){
        rev_no = rev_no*10 + n%10;
        n/=10;
    }
    
    return rev_no;
}
