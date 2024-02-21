/*print the pattern 1// value base question
                    2 1 // row =column =4 n=4
                    3 2 1  // tringle shape
                    4 3 2 1 */
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
  cout<<row-col+1<<" ";
  //value=value+1;

  col=col+1;
}
      cout<<endl;
      row=row+1;
  
  }
  }
  