main: main.o Button.o Command.o MoveBackward.o MoveForward.o RemoteControlCar.o RemoteControlPlane.o RemoteControlRocket.o RemoteControlVehicle.o RocketAdapter.o TurnOff.o TurnOn.o
	g++ -o main main.o Button.cpp Command.cpp MoveBackward.cpp MoveForward.cpp RemoteControlCar.cpp RemoteControlPlane.cpp RemoteControlRocket.cpp RemoteControlVehicle.cpp RocketAdapter.cpp TurnOff.cpp TurnOn.cpp

main.o: main.cpp
	g++ -c main.cpp

Button.o: Button.h Button.cpp
	g++ -c Button.cpp
	
Command.o: Command.h Command.cpp
	g++ -c Command.cpp
	
MoveBackward.o: MoveBackward.h MoveBackward.cpp
	g++ -c MoveBackward.cpp

MoveForward.o: MoveForward.h MoveForward.cpp
	g++ -c MoveForward.cpp
	
RemoteControlCar.o: RemoteControlCar.h RemoteControlCar.cpp
	g++ -c RemoteControlCar.cpp
	
RemoteControlPlane.o: RemoteControlPlane.h RemoteControlPlane.cpp
	g++ -c RemoteControlPlane.cpp
	
RemoteControlRocket.o: RemoteControlRocket.h RemoteControlRocket.cpp
	g++ -c RemoteControlRocket.cpp
	
RemoteControlVehicle.o: RemoteControlVehicle.h RemoteControlVehicle.cpp
	g++ -c RemoteControlVehicle.cpp

RocketAdapter.o: RocketAdapter.h RocketAdapter.cpp
	g++ -c RocketAdapter.cpp
	
LiverpoolSoccerBall.o: LiverpoolSoccerBall.h LiverpoolSoccerBall.cpp
	g++ -c LiverpoolSoccerBall.cpp
	
TurnOff.o: TurnOff.h TurnOff.cpp
	g++ -c TurnOff.cpp
	
TurnOn.o: TurnOn.h TurnOn.cpp
	g++ -c TurnOn.cpp

run:
	./main

clean:
	rm *.o main