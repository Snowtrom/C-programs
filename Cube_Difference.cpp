#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    long long n1;
    cin>>n1;
    vector <long long> del1;
    long long i, j;
    for(i = 1;i <= n1/2;i++){
        if(n1 % i == 0){
            del1.push_back(i);
        }
    }


    double a1, b1;
    for(i = 0;i < del1.size();i++){
        b1 = (-3*del1[i] + sqrt(12*n1/del1[i] - 3*del1[i]*del1[i])) / 6;
        a1 = del1[i] + b1;
        if(floor(b1) == b1 && floor(a1) == a1 && b1 > 0 && a1 > 0){
            cout<<a1<<" "<<b1<<endl;
            break;
        }
    }

    if(floor(b1) != b1 || floor(a1) != a1 || a1 <= 0 || b1 <= 0){
        cout<<"NO"<<endl;
    }

    return 0;
}
