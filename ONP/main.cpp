//
//  main.cpp
//  ONP
//
//  Created by Kunal Swami on 13/06/16.
//  Copyright © 2016 SHREE-GANESH. All rights reserved.
//

#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    int t;
    string exp;
    
    cin>>t;
    
    while(t--){
        cin>>exp;
        
        string rpn="";
        stack<char> st;
        
        for(int i=0;i<exp.size();i++){
            char ch = exp.at(i);
            
            if(ch=='('){
                st.push(exp.at(i));
            } else if(ch==')'){
                while(st.top()!='('){
                    rpn.push_back(st.top());
                    st.pop();
                }
                
                // pop '('
                st.pop();
            } else if(ch>='a'&&ch<='z'){
                rpn.push_back(ch);
            } else {
                st.push(ch);
            }
        }
        
        cout<<rpn<<endl;
    }
    
    return 0;
}
