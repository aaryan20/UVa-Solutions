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
    string str;
    while(getline(cin,str)){
        cout << str << "\n"; 
        str.clear();
    }  
}