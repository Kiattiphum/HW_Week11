class time{
  private:
    int m,h,s;
  public: 
    void getTime();
    class time subtract(class time);
    void display();
 
} t1, t2, t3;

void time::getTime(){
  cout << "Example formath hour:min:sec"<<endl;
  cin >> this-> h;
  cin.ignore(1, ':');
  cin >> this-> m;
  cin.ignore(1, ':');
  cin >> this-> s;

  if (this->s >= 60){
    this->m ++;
    this->s = this->s % 60;
  }
  if (this->m >= 60){
    this->h ++;
    this->m = this->m % 60;
  }
  if (this->h >= 24){
    this->h = this->h % 24;
  } 
    
}

class time time::subtract(class time t){
  class time temp;
  temp.s = this-> s - t.s;
  temp.m = this-> m - t.m;
  temp.h = this-> h - t.h;

  if (this-> s<0){
    this->m -=1;
    this->s = 60 + this->s;
    if (this->m<0){
      this->h -=1;
      this->m = 60 + this->m;
    }
  }
  else if (this->m<0){
    this->h -=1;
    this->m = 60 + this->m;
  }

  return temp;
}

void time::display(){
  cout<<setfill('0')<<setw(2)<< this->h <<":";
  cout<<setfill('0')<< this->m <<":";
  cout<<setfill('0')<< this->s <<endl;
}

