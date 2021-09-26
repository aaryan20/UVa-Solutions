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
    speed();
    int t,a,b,c,d;
    while(cin >> t){
        a = t;
        cin>>b>>c>>d;
        if( a==b && b==c && c==d && d==0) break;
        int theta = 360*3;
        int k = 360/40;

        if(b<a) theta+= (a-b)*k;
        else theta+= (40-(b-a))*k;

        if(b<c) theta+= (c-b)*k;
        else theta+= (40-(b-c))*k;

        if(d<c) theta+= (c-d)*k;
        else theta+= (40-(d-c))*k;

        cout << theta << "\n";

    }  
}