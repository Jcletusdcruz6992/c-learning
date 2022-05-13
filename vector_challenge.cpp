#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> vector_1 {};
  vector<int> vector_2 {};
  vector_1.push_back(10);
  vector_1.push_back(20);
  cout<<"vector_1[0]: "<<vector_1.at(0)<<"\t vector_1[1]: "<<vector_1.at(1)<<"\t Size of Vector 1: "<<sizeof(vector_1)<<endl;
  vector_2.push_back(100);
  vector_2.push_back(200);
  cout<<"vector_2[0]: "<<vector_2.at(0)<<"\t vector_2[1]: "<<vector_2.at(1)<<"\t Size of Vector 2: "<<sizeof(vector_2)<<endl;
  vector<vector<int>> vector_2d {{0}};
  vector_2d.push_back(vector_1);
  cout<<vector_2d;


}
