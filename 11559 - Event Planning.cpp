#include<bits/stdc++.h>

using namespace std;
using namespace std::chrono;

auto start = high_resolution_clock::now();

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define re(i,x,n) for(int i=x; i<n; i++)
#define ff first
#define ss second
#define mkp make_pair

// void FileIO() {
//     freopen("input.txt", " r ", stdin);
//     freopen("output.txt" , " w ", stdout);
// }
void speed(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int main(){
    // speed();
    int n, b, h, w;
    while(cin >> n >> b >> h >> w){
        int min_price = b+1;
        re(i,0,h){
            int p;
            cin >> p;
            int arr[w];
            re(j,0,w) cin >> arr[j];
            sort(arr,arr+w);
            if(arr[w-1] >= n) min_price = min(min_price,p);
        }
        if(min_price*n <= b) cout << min_price*n <<"\n";
        else cout << "stay home\n";
    }    
    // return 0;
}
