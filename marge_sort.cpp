#include <bits/stdc++.h>
using namespace std;
void marge(int ar[], int left[], int right[],int n,int left_size, int right_size){

    int i =0,j=0,k=0;
    while(i<left_size && j<right_size){
        if(left[i]<=right[j]){
            ar[k] = left[i];
            k++;
            i++;
        }
        else{
            ar[k] = right[j];
            k++;
            j++;
        }
    }
    while(i<left_size){
        ar[k] = left[i];
        i++;
        k++;
    }
    while(j<right_size){
        ar[k] = right[j];
        j++;
        k++;
    }

}
void marge_sort(int ar[],int n){
    if(n<2){
        return ;
    }
    int mid = n/2;
    int left_ar[mid];
    int right_ar[mid];
    for(int i =0;i<mid;i++){
        left_ar[i]=ar[i];
    }
    int flag =0;
    for(int i =mid;i<n;i++){
        right_ar[flag]=ar[i];
        flag++;
    }
    marge_sort(left_ar,mid);
    marge_sort(right_ar,n-mid);
    marge(ar, left_ar, right_ar,n,mid,n-mid);



}
int main() {
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    marge_sort(nums, n);

    for(int i = 0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
// Time complexity: average case/wost case/best_case:O(nlog(n))
// space complexity::: O(n)