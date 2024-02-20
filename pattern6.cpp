/*print the pattern 1
                    2 2   // row =column =4 n=4
                    3 3 3  // tringle shape
                    4 4 4 4 */
 #include<iostream>
  using namespace std;
  int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
int j=1;
while(j<=i){
  cout<<i <<" ";
  j=j+1;
}
      cout<<endl;
      i=i+1;
  
  }
  }
  