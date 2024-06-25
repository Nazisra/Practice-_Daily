#include <bits/stdc++.h>
using namespace std;
#define rahad() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define all v.begin(),v.end()
#define output for(auto it:v){cout<<it<<" ";}

int b_to_d(int n);

int32_t main(){
rahad();
  
int n;

cin>>n; // input nicci binary 


cout<<b_to_d(n)<<endl;

       return 0;
}


int b_to_d(int n){


int ans=0;

int p=1;  // 2^0 is 1 ,,,and initial power is always start from 0;


while(n>0){

int last=n%10;

ans+= p*last;  // formula 1*2^1+0*2^0 and so on;

p=p*2; // 2^0=1 
       // 2^1=2   2^2=4 2^3=8 so 1,2,4,8,16 .............

n=n/10;  // removing the last digit of the whole number

}

return ans;


}











