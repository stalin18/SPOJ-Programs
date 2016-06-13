//
//  main.cpp
//  DCEPC206
//
//  Created by Kunal Swami on 13/06/16.
//  Copyright © 2016 SHREE-GANESH. All rights reserved.
//

#include <iostream>

using namespace std;

void merge(int arr[], int sumArr[], int l, int mid, int r){
    // create two temp left and right arrays
    int n1 = mid-l+1;
    int n2 = r-mid+1;
    int left[n1];
    int right[n2];
    
    for(int i=0;i<n1;i++){
        left[i] = arr[l+i];
    }
    
    for(int i=0;i<n2;i++){
        right[i] = arr[mid+1+i];
    }
    
    // merge
    int i=0, j=0, k=l;
    int leftAdder = 0;
    int rightAdder = 0;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            // if element left[i] is strictly less, add it to sum of sumArr[k]
            if(left[i]<right[j]){
                //sumArr[k] += leftAdder;
                // update adder with this num for future
                leftAdder += left[i];
                //sumArr[j] += leftAdder;
                //rightAdder += left[i];
            }
            
            arr[k] = left[i];
            i++; k++;
        } else{
            // add previous small numbers already stored in 'adder' to sumArr[k]
            sumArr[k] += leftAdder;
            // update adder with this num for future
            //leftAdder += right[j];
            
            arr[k] = right[j];
            j++; k++;
        }
    }
    
    if(i<n1){
        // add all small number's sum included in adder for first left-over element
        //sumArr[k] += leftAdder;
        //leftAdder += left[i];
        arr[k++] = left[i++];
    }
    
    if(j<n2){
        // add all small number's sum included in adder for first left-over element
        sumArr[k] += leftAdder;
        //leftAdder += right[j];
        arr[k++] = right[j++];
    }
}

void mergesort(int arr[], int sumArr[], int l, int r){
    // if more than one element, then split into half and call recursively
    if(r>l){
        int mid = l + (r-l)/2;
        
        mergesort(arr, sumArr, l, mid);
        mergesort(arr, sumArr, mid+1, r);
        
        // merge the two halves
        merge(arr, sumArr, l, mid, r);
    }
}

int main(int argc, const char * argv[]) {
    // test-cases and number of integers
    int t, n;
    // array to hold integers, max 10^5
    int arr[100000];
    // array to hold ans for each number
    int sumArr[100000] = {0};
    int resultSum;
    
    cin>>t;
    while(t--){
        cin>>n;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        // mergesort
        mergesort(arr, sumArr, 0, n-1);
        
        // compute final ans
        resultSum = 0;
        for(int i=0;i<n;i++){
            resultSum += sumArr[i];
            cout<<sumArr[i]<<endl;
        }
        
        cout<<resultSum<<endl;
    }
    
    return 0;
}
