#include <iostream>

using namespace std;

//Base class
class Sensor{
public :
    virtual int getReading()=0; // pure virtual function

    void setReading(int r){
    reading = r;
    }

  protected:
      int reading;
};

//Derived class

class Temperature: public Sensor{
public:
    int getReading(){
    return(reading);
    }

};

class Humidity: public Sensor{
public:
    int getReading(){
    return(reading);
    }

};

int main()
{
   Temperature Temp;
   Humidity    Hum;

   Temp.setReading(8);
   Hum.setReading(30);

   cout << "Temperature in celsius: " << Temp.getReading() << endl;
   cout << "Humidity in percentage : " << Hum.getReading() << endl;
return 0;
}
