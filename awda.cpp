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
float smol = 10e-7;
// void FileIO() {
//     freopen("input.txt", " r ", stdin);
//     freopen("output.txt" , " w ", stdout);
// }
void speed(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int main(void){
    // speed();
    int p, rm;
    // scanf("%d %d\n", &p, &rm);
    cin >> p >> rm;
    cin.ignore();
    string x;
    re(i,0,rm){
        getline(cin,x);
        cout << x << " :out\n";
    }

}