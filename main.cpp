#include<stdlib.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void perm(vector<int>& vec,int left,int right){
    if(left==right){
        for(int i=0;i<right;i++){
            cout<<vec[i]<<' ';
        }
        cout<<endl;
    }
    else{
        for(int i=left;i<right;i++){
            swap(vec[i],vec[left]);
            perm(vec,left+1,right);
            swap(vec[i],vec[left]);
        }
    }
}

int main(){
    vector<int>nums(4);
    for(int i=0;i<4;i++)nums[i]=i;
    perm(nums,0,4);
    return 0;
}