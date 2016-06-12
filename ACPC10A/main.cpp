//
//  main.cpp
//  ACPC10A
//
//  Created by Kunal Swami on 13/06/16.
//  Copyright © 2016 SHREE-GANESH. All rights reserved.
//

#include<iostream>

using namespace std;

int main(){
    int a1, a2, a3;
    
    cin>>a1>>a2>>a3;
    
    do {
        if((2*a2)==a1+a3){
            cout<<"AP "<<a3+(a3-a2)<<endl;
        } else {
            int nextTerm = a3*(a3/a2);
            cout<<"GP "<<nextTerm<<endl;
        }
        
        cin>>a1>>a2>>a3;
    } while(!(a1==0&&a2==0&&a3==0));
    
    return 0;
}
