#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <int> test_case {1,2,3,4,5};
  vector <char> zero(5);
  vector<char> vowel {'a','e','i','o','u'};
  test_case.push_back(6);
  const int age[5] {1,2,3,4,5};
  char name[5] {'a','b'};
  double pay[] {23.5,43.5,36.5};
  pay[1]=22;
  cin>>name[2];
  int random[5] {};
  int movie_rating [3][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
  };
  for(int i=0;i<6;i++)
  {
    cout<<"Vowels:"<<vowel[i]<<endl;
    cout<<"zero"<<zero[i]<<endl;
    cout<<"Vector_at"<<test_case.at(4)<<endl;
    cout<<"Vector_output"<<test_case[i]<<endl;
    cout<<"movie_rating"<<movie_rating[i][i]<<endl;
    cout<<"age"<<i<<":"<<age[i]<<endl;
    cout<<"name"<<"["<<i<<"]"<<name[i]<<endl;
    cout<<"pay"<<i<<":"<<pay[i]<<endl;
    cout<<"random"<<random[i]<<endl;
  }
}
