#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>>printadj(int n, int m, vector<vector<int>> & edges ){
   

    //    ans array will store all the adecent nodes  corresponding on indexes;
   vector<int>ans[n];
   
   for(int i=0;i<m;i++){

       int u=edges[i][0];
       int v=edges[i][1];


       ans[u].push_back(v);
       ans[v].push_back(u);
   }


   vector<vector<int>> adj;

   for(int i=0;i<n;i++){
       adj[i].push_back(i);
      

    //   entering neighbours 

       for(int j=0;j<ans[i].size();j++){
           adj[i].push_back(ans[i][j]);
       }
   }
   return adj;


}
int main(){

return 0;
}