main: main.o AccountActivation.o AccountSettings.o Colleague.o Company.o Individual.o Mediator.o Notifier.o
	g++ -o main main.o AccountActivation.cpp AccountSettings.cpp Colleague.cpp Company.cpp Individual.cpp Mediator.cpp Notifier.cpp

main.o: main.cpp 
	g++ -c main.cpp

AccountActivation.o: AccountActivation.h AccountActivation.cpp
	g++ -c AccountActivation.cpp
	
AccountSettings.o: AccountSettings.h AccountSettings.cpp
	g++ -c AccountSettings.cpp
	
Colleague.o: Colleague.h Colleague.cpp
	g++ -c Colleague.cpp

Company.o: Company.h Company.cpp
	g++ -c Company.cpp
	
Individual.o: Individual.h Individual.cpp
	g++ -c Individual.cpp
	
Mediator.o: Mediator.h Mediator.cpp
	g++ -c Mediator.cpp
	
Notifier.o: Notifier.h Notifier.cpp
	g++ -c Notifier.cpp
	
run:
	./main

clean:
	rm *.o main