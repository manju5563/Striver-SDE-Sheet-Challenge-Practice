 #include<bits/stdc++.h> 
 using namespace std;
 
 void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            switch(nums[mid]){
                case 0:
                    swap(nums[low++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
            }
        }
    }

// int main(){
//     vector<int>v={1,1,1,2,2,0,0,0,1,1,2,1,2,0};
//     sortColors(v);
//     for(auto it:v){
//         cout<<it<<" ";
//     }
// }