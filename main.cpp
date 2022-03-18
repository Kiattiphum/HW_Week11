#include <iostream>
#include <iomanip>
using namespace std;
#include "student.h"

int main(){
  cout<<"What time was it?"<<endl;
  t1.getTime();
  t1.display();
  cout<<"What time is it now?"<<endl;
  t2.getTime();
  t2.display();
  t3=t2.subtract(t1);
  cout<<"Time diff is ";
  t3.display();
}