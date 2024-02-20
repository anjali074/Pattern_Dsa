/*print the pattern 1// value base question
                    2 3  // row =column =4 n=4
                    3 4 5  // tringle shape
                    4 5 6 7  */
 #include<iostream>
  using namespace std;
  int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
int value=row;
int col=1;
while(col<=row){
  cout<<value<<" ";
  value=value+1;

  col=col+1;
}
      cout<<endl;
      row=row+1;
  
  }
  }
  