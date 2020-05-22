    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int mx = 0;
        for(int i = 0; i <= n/a; i++){
            for(int j = 0; j <= n/b; j++){
                if((n-i*a-j*b)>=0 && (n-i*a-j*b)%c==0){
                    if(mx<i+j+(n-i*a-j*b)/c){
                        mx = i+j+(n-i*a-j*b)/c;
                    }
                }
            }
        }
        cout << mx << endl;
    }