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
    int flag = 0;
    string out;
    while(getline(cin,str)){
        for(int i=0; i<str.size();i++){
            if(str[i] == '"' & flag == 0) {flag++; out.push_back('`'); out.push_back('`'); }
            else if(str[i] == '"' & flag == 1) {flag--; out.push_back('\''); out.push_back('\'');}
            else out.push_back(str[i]);
            
        }
        cout << out << "\n"; 
        out.clear();
    }

    
   
    
}