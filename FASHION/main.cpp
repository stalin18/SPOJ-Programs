//
//  main.cpp
//  FASHION
//
//  Created by Kunal Swami on 13/06/16.
//  Copyright © 2016 SHREE-GANESH. All rights reserved.
//

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    int N;
    
    cin>>t;
    while(t--){
        cin>>N;
        
        int men[N], women[N];
        
        for(int i=0;i<N;i++){
            cin>>men[i];
        }
        
        for(int i=0;i<N;i++){
            cin>>women[i];
        }
        
        sort(men, men+N);
        sort(women, women+N);
        
        int ans=0;
        for(int i=0;i<N;i++){
            ans+=men[i]*women[i];
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}
