//
//  main.cpp
//  TOANDFRO
//
//  Created by Kunal Swami on 13/06/16.
//  Copyright © 2016 SHREE-GANESH. All rights reserved.
//

#include<iostream>
#include<string>

using namespace std;

int main(){
    int col, row;
    string s, ans;
    
    cin>>col;
    
    do {
        cin>>s;
        ans = "";
        row = s.length()/col;
        
        ans.resize(s.length());
        
        bool flag=1;
        int j=0, rowNum=0;
        for(int i=0;i<s.length();i++){
            if(flag){
                ans[(row * (j++)) + rowNum] = s.at(i);
                
                if(j==col){
                    flag = (flag==1)?0:1;
                    j=col;
                    rowNum++;
                }
            } else {
                ans[(row * (--j)) + rowNum] = s.at(i);
                
                if(j==0){
                    flag = (flag==1)?0:1;
                    j=0;
                    rowNum++;
                }
            }
        }
        
        cout<<ans<<endl;
        
        cin>>col;
    } while(col!=0);
    
    return 0;
}
