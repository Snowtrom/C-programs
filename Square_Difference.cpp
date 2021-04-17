#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector <long long> d;
    for(long long i = 1;i <= n/2;i++){
        if(n % i == 0){
            d.push_back(i);
        }
    }


    double a, b;
    for(long long i = 0;i < d.size();i++){
        b = (n / d[i] - d[i]) / 2;
        a = d[i] + b;
        if(a*a - b*b == n && a >= 0 && b >= 0){
            cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}
