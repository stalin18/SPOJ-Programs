//
//  main.cpp
//  SAMER08F
//
//  Created by Kunal Swami on 13/06/16.
//  Copyright © 2016 SHREE-GANESH. All rights reserved.
//

#include <iostream>

#include<iostream>

using namespace std;

int main(){
    int n;
    
    cin>>n;
    
    // assuming atleast one input
    do {
        int ans = (n * (n+1) * (2 *n + 1))/6;
        cout<<ans<<endl;
        
        cin>>n;
    } while(n!=0);
    
    return 0;
}
