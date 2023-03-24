#include <iostream>

using namespace std;

class animal{
    public:
    void power()
    {
        cout<<"Power Unloaded\n";
    }
    void nature()//inheritance ambiguity
    {
        cout<<"Nature owned by animals";
    }
};

class human{
  public:
  int age;
  
  int getage()
  {
      return this->age;
  }
  void setage(int a)
  {
      this->age = a;
  }
  void  nature()
  {
      cout<<"Nature owned by humans";
  }
  
  // use of protected same as private + child class have access
  protected:
  int height=6;
};

// inheriting in man
class man:public human{
    
    public:
    int job=5;
    
    int getheight()
    {
        return this->height;
    }
    
    
};

//multilevel inhertance
class wman:public man{
    
};


//multiple inhertance
class mutant: public human, public animal
{
    
};

int main()
{
    man m;
    wman w1;
    mutant mu;
    m.setage(5);//using data functions of parent class
    cout<<m.getage()<<"\n";
    cout<<m.job<<"\n";
   // cout<<m.height<<"\n";
    cout<<m.getheight()<<"\n";
    
    cout<<w1.job<<"\n";
    w1.setage(7);
    cout<<w1.getage()<<"\n";
    
    mu.power();
    mu.setage(8);
    cout<<mu.getage()<<"\n";
    
    //inhertance ambiguity solution
    mu.human::nature();
    cout<<"\n";
    mu.animal::nature();
    

    return 0;
}
