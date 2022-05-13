#include<iostream>
#include<climits>
using namespace std;
int main(int argc, char const *argv[]) {
  /* code */
  cout<<sizeof(char)<<endl;
  cout<<sizeof(int)<<endl;
  cout<<sizeof(float)<<endl;
  cout<<sizeof(double)<<endl;
  cout<<sizeof(long long)<<endl;
  cout<<sizeof(unsigned int)<<endl;
  cout<<sizeof(short )<<endl;
  cout<<sizeof(float)<<endl;
  cout<<sizeof(double)<<endl;
  cout<<sizeof(long double)<<endl;
  cout<<"Minimum Values"<<endl;
  cout<<CHAR_MIN<<endl;
  cout<<INT_MIN<<endl;
  cout<<SHRT_MIN<<endl;
  cout<<LONG_MIN<<endl;
  cout<<LLONG_MIN<<endl;
  cout<<"Maximum Values"<<endl;
  cout<<CHAR_MAX<<endl;
  cout<<INT_MAX<<endl;
  cout<<SHRT_MAX<<endl;
  cout<<LONG_MAX<<endl;
  cout<<LLONG_MAX<<endl;
  int age {5};
  cout<<sizeof(age)<<endl;
  cout<<sizeof age<<endl;

  double value{22.5};
  cout<<sizeof(value)<<endl;
  cout<<sizeof value <<endl;
  return 0;


}
