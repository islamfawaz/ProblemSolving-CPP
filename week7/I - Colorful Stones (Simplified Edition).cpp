             /* بسم الله الرحمن الرحيم */
         /* لا اله الا الله محمد رسول الله  */
          /* اللهم لا سهل الا ما جعلته سهلا */
             /*________ACCEPT________*/
#include <bits/stdc++.h>
using namespace std;
#define slama() ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
/*______hello world_______*/
#define ll long long
#define db double
#define ft float
#define nl cout<<"\n";
#define sp(x) setprecision(x)
#define u_ll unsigned long long
#define u_int unsigned int
#define sz(s) long long(s.size())
#define for0(i,y,x) for(int i=y;i<x;i++)
#define for_(i,x,y) for(int i=x;i>=y;i--)
/*_________scan___________*/
#define cini(x) int x;cin>>x;
#define cinf(x) float x;cin>>x;
#define cins(x) string x;cin>>x;
#define cinc(x) char x;cin>>x;
#define cind(x) double x;cin>>x;
#define cinl(x) long long x;cin>>x;
#define cinl2(x,y) long long x,y;cin>>x>>y;
#define cin_arr[x] int arr[x];for(int i=0;i<x;i++)cin>>arr[i];
#define cin_arr[x][y] int arr[x][y];for(int i=0;i<x;i++){for(int j=0;j<x;j++)cin>>arr[i][j];}
/*_________print___________*/
#define pr1(x) cout<<x
#define pr2(x,y) cout<<x<<" "<<y
/*___*****yes & no*****___*/
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"
/*___________________________الحمد لله__________________________________*/
/*
                                                            *   *
  **            **                                         *** ***    ** **
  **            **                                          *   *     ** **
  **            **                                            ***     ** **
  **  *         **                                   *       *****    ** **
  ** ***        **               **   **  **         **     **   **   ** **
  **  *    **   **     **        **   **  **         **     **   **   ** **
  **      **   **    **         **   **  **  *      **      ** **    ** **
  **************    **         ***********  ************************** **
   ************      ********************    **************** *******  *
                      ********
  ________________________________________________________________________
  ________________________________________________________________________

     ****    ***          ***         ***        ***         ***
   *******   ***        *** ***     *** ***    *** ***     *** ***
  ***        ***       ***   ***   ***   ***  ***   ***   ***   ***
   *****     ***      ***     *** ***     ******     *** ***     ***
    ******   ***      ***     *** ***       **       *** ***     ***
       ****  ***      *********** ***                *** ***********
        ***  ***    * *********** ***                *** ***********
   *******   ******** ***     *** ***                *** ***     ***
     ****    *******  ***     *** ***                *** ***     ***
  ________________________________________________________________________
  ________________________________________________________________________
*/
void solve(){//code solve ?
   int t=1;
	//cin>>t;
	while(t--){// test case ?
   
	string val1,val2; // fds   ['f','d','s']
	cin>>val1>>val2;
	int counter = 0;
	
	for(int i=0;i<val2.length();i++){
		if(val1[counter] == val2[i]){
			counter++;
		}
	}
	counter++;
	cout<<counter<<endl;
	}
}
int main(int argc, char** argv) {
	slama();
	solve();
	return 0;
}
