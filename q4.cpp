#include <iostream>
#include <vector>
using namespace std;
class Vehicle{
vector<auto> v;
public:
    virtual void start() = 0;
    virtual void move() = 0;
    virtual void stop() = 0;

    
\
};

class Car : public Vehicle{
string color;
int door;
friend class SportsCar;
public:
    Car(string _color, int _door){
        color = _color;
        door = _door;
    }
    void start() override{
        cout << "The " << color << " car with " << door << " doors has started!" << endl;
    }
    void move() override{
        cout << "The " << color << " car with " << door << " doors is moving!" << endl;
    }
    void stop() override{
        cout << "The " << color << " car with " << door << " doors has stopped!" << endl;
    }
};

class SportsCar: public Car{
int power;
public:
    SportsCar(string _color, int _door, int _power){
        color = _color;
        door = _door;
        power = _power;
    }
    void rev_engine(){
        cout << "Vroom Vroom! This sports car has "<< power << " horsepower!" << endl;
    }
};

class MotorCycle : public Vehicle{
string maker;
string model;
friend class DirtBike;
public:
    MotorCycle(string _maker, string _model){
        maker = _maker;
        model = _model;
    }
    void start() override{
        cout << "The " << maker << " "<< model << "motocycle has started!" << endl;
    }
    void move() override{
        cout << "The " << maker << " "<< model << "motocycle is moving!" << endl;
    }
    void stop() override{
        cout << "The " << maker << " "<< model << "motocycle has stopped!" << endl;
    }
};

class DirtBike : public MotorCycle{
int suspension_travel;
public:
    DirtBike(string _maker, string _model, int sus){
        maker = _maker;
        model = _model;
        suspension_travel = sus;
    }
    void jump(){
        cout << "Flying through the air on this dirt bike with " << sus << " inches of suspension travel!" << endl;
    }
};
class Truck : public Vehicle{
string maker;
int kg;
public:
    Truck(string _maker, int _kg){
        maker = _maker;
        kg = _kg;
    }
    void start() override{
        cout << "The " << maker << " truck with a payload capavity of " << kg << " lbs has started!" << endl;
    }
    void move() override{
        cout << "The " << maker << " truck with a payload capavity of " << kg << " lbs is moving!" << endl;
    }
    void stop() override{
        cout << "The " << maker << " truck with a payload capavity of " << kg << " lbs has stopped!" << endl;
    }
};
class PickupTruck: public Truck{
string maker;
int kg;
int jim;
public:
    PickupTruck(string _maker, int _kg, int _jim){
        maker = _maker;
        kg = _kg;
        jim = _jim;
    }
    void load(){
        cout << "Loading up the " << jim << "ft bed!" << endl;
    }
};
class Bus : public Vehicle{
int pass;
int seat;
public:
    Bus(int _pass, int _seat){
        pass = _pass;
        seat = _seat;
    }
    void start() override{
        cout << "The bus with"<< pass << "passengers and" << seat << " doors has started!" << endl;
    }
    void move() override{
        cout << "The bus with"<< pass << "passengers and" << seat << " doors is moving!" << endl;
    }
    void stop() override{
        cout << "The bus with"<< pass << "passengers and" << seat << " doors has stopped!" << endl;
    }

    void honk(){
        cout << "Beep beep! Make way for the bus!" << endl;
    }

};


int main() {
    Car* car = new Car("red",4);
    SportsCar* sports_car = new SportsCar("blue",2,500);
    MotorCycle* motorcycle = new MotorCycle("Honda","CBR1000RR");
    DirtBike* dirt_bike = new DirtBike("KTM", "450 XC-F", 12);
    Truck* truck = new Truck("Ford",5000);
    PickupTruck* pickup_truck = new PickupTruck("Chevy", 3000,6);
    Bus* bus = new Bus(50,40);

    vector<Vehicle*> vehicles;
    vehicles.push_back(car);
    vehicles.push_back(sports_car);
    vehicles.push_back(motorcycle);
    vehicles.push_back(dirt_bike);
    vehicles.push_back(truck);
    vehicles.push_back(pickup_truck);
    vehicles.push_back(bus);

    for(Vehicle* vehicle : vehicles){
        vehicle->start();
        vehicle->move();
        vehicle->stop();
        cout << endl;
    }

    sports_car->rev_engine();
    dirt_bike->jump();
    pickup_truck->load();
    bus->honk();

    delete car;
    delete sports_car;
    delete motorcycle;
    delete dirt_bike;
    delete truck;
    delete pickup_truck;
    delete bus;
    
}