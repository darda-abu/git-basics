#include <bits/stdc++.h>
#define LL              long long int
#define PB              push_back    
#define MP              make_pair    
#define pii             pair<int,int>
#define endl            "\n"   
#define F               first  
#define S               second 
#define inf             INT_MAX
using namespace std;  
const int nmax=2e6+69;
const LL M=1e9+7;     

int isPrime(int k){
    if (k <= 1)
        return 0;
    if (k==2 || k==3)
        return 1;
    if (k % 2 == 0 || k % 3 == 0)
        return 0;
    for (int i = 5; i * i <= k; i = i + 6)
        if (k % i == 0 || k % (i + 2) == 0)
            return 0;
    return 1;
}
 
int factorial(int n){
    if (n == 0) return 1;
    return n * factorial(n-1);
}
void criticalFix(){
    cout<<"fixed"<<endl;
}
int main(){
    cout << factorial(5) << endl;
}