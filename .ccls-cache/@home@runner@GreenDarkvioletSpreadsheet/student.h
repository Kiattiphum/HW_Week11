class student{
  private:
    int m,h,s;
  public: 
    void set(int , string );
    void display();
    void set_age(int);
    int get_age(){return age;}
    string get_name(){return name;}
 
}t1,t2;

void student::set(int a, string n){
  this->set_age(a);
  name=n;
}  

void student::display(){
  cout<<"Name:"<< this->name<<endl;
  cout<<"Age:"<< this->age<< endl;
}
 