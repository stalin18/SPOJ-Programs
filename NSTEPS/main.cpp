//
//  main.cpp
//  NSTEPS
//
//  Created by Kunal Swami on 13/06/16.
//  Copyright © 2016 SHREE-GANESH. All rights reserved.
//

#include<iostream>

using namespace std;

int main(){
    int t;
    int x, y;
    
    cin>>t;
    
    while(t--){
        cin>>x>>y;
        
        if(y==x||(x-2>=0&&y==x-2)){
            // number exists, find the number
            int diff, lower, upper;
            
            bool checkOdd = x%2;
            
            checkOdd?(diff=x-3):(diff=x-2);
            
            if(checkOdd&&diff<0){ // x=1
                cout<<1<<endl;
            } else if(!checkOdd&&diff<0){
                cout<<0<<endl;
            } else {
                lower = x+diff;
                upper = lower + 2;
                
                if(y==x){
                    cout<<upper<<endl;
                } else {
                    cout<<lower<<endl;
                }
            }
        } else {
            cout<<"No Number"<<endl;
        }
    }
}