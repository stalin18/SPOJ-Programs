//
//  main.cpp
//  CANDY
//
//  Created by Kunal Swami on 13/06/16.
//  Copyright © 2016 SHREE-GANESH. All rights reserved.
//

#include<iostream>

using namespace std;

int main(){
    // number of candies
    int N;
    
    cin>>N;
    
    do {
        int candies[N], sum=0;
        for(int i=0;i<N;i++){
            cin>>candies[i];
            sum+=candies[i];
        }
        
        if(!(sum%N)){
            // possible to make candies equal
            int eqValue = sum/N;
            int moves=0;
            for(int i=0;i<N;i++){
                if(candies[i]>eqValue){
                    moves+=candies[i]-eqValue;
                }
            }
            
            cout<<moves<<endl;
        } else {
            cout<<-1<<endl;
        }
        
        cin>>N;
    } while(N!=-1);
    
    return 0;
}
