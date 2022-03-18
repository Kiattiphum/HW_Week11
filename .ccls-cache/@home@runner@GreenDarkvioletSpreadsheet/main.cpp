#include <iostream>
using namespace std;
#include "student.h"

int main(){
  Time t1,t2,t3;
  cout<<"What time was it?";
  t1.getTime();
  cout<<"What time is it now?";
  t2.getTime();
  t3=t2.subtract(t1);
  cout<<"Time diff is ";
  t3.display();
}