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

int factorial(int n){
    if (n == 0) return 1;
    return n * factorial(n-1);
}

int fibonacci(int n){
    if (n == 0 or n == 1) return 1;
    return fibonacci(n-2) + fibonacci(n-1);
}
//squash line 1

int main(){
    cout << factorial(5) << endl;
    cout << fibonacci(5) << endl;
}