//
//  main.cpp
//  FCTRL2
//
//  Created by Kunal Swami on 13/06/16.
//  Copyright © 2016 SHREE-GANESH. All rights reserved.
//

#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int t;
    int n;
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        int a[158]={0}, temp=n, i=0;
        
        while(temp){
            a[i++] = temp%10;
            temp/=10;
        }
        
        n--;
        while(n>1){
            temp = 0;
            int operation;
            
            for(i=0;i<158;i++){
                operation = a[i]*n + temp;
                temp = (operation)/10;
                a[i] = (operation)%10;
            }
            
            n--;        }
        
        i=157;
        while(!a[i]){
            i--;
        }
        
        for(int j=i;j>-1;j--){
            printf("%d", a[j]);
        }
        
        printf("\n");
    }
    
    return 0;
}
