#include<bits/stdc++.h>
using namespace std;
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int gap=ceil((float)(n+m)/2);
        while(gap>0){
            int i=0,j=gap;
            while(j<(m+n)){
                if(j<m && nums1[i]>nums1[j]){
                    swap(nums1[i],nums1[j]);
                }
               else if(j>=m && i<m && nums1[i]>nums2[j-m]){
                    swap(nums1[i],nums2[j-m]);
                }
                else if(j>=m && i>=m && nums2[i-m]>nums2[j-m]){
                    swap(nums2[i-m],nums2[j-m]);
                }
                i++;j++;
            }
            
            if(gap==1){
                gap=0;
            }
            else{
                gap=ceil((float)(gap)/2);
            }
        }
