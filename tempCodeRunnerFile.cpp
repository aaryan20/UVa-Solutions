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
    speed();
    
    int n, p;
    int round = 0;
    while(cin >> n >> p, n || p){
        round++;
        cin.ignore();
        string s, best_company;
        float compliance = 0;
        re(i,0,n) getline(cin,s);
        float cost_proposal = INT_MAX;
        while(p--){
            getline(cin,s);
            float cost;
            int met_req,current_compliance;
            cin >> cost >> met_req;
            string temp;
            cin.ignore();
            re(i,0,met_req) getline(cin,temp);
            current_compliance = met_req;
            if(current_compliance > compliance && cost < cost_proposal ) {
                best_company = s;
                compliance = current_compliance;
            }
        }
        cout << "RFP #" << round << "\n" << best_company << "\n\n";
       
    }
}
