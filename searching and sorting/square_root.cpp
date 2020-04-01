#include<iostream>
using namespace std;

float binarySqRoot(int no,int p=2){

    int s=0,e=no;
    float ans;

    ///Binary Search for Integer Part
    while(s<=e){
        int mid = (s+e)/2;

        if(mid*mid==no){
            ans = mid;
            break;
        }

        if(mid*mid<no){
            s = mid+1;
            ans = mid;
        }
        else{
            e = mid - 1;
        }
    }


    ///Linear Search for the Precision part
    float inc = 0.1;

    for(int i=0;i<p;i++){

        while(ans*ans<=no){
            ans += inc;
        }
        ans  = ans - inc;
        inc = inc/10;
    }
    return ans;
}


int main(){

    // Complexity O(n)
    cout<<binarySqRoot(2,3)<<endl;
    cout<<binarySqRoot(3,3)<<endl;

return 0;
}
