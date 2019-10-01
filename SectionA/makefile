main: main.o AccountActivation.o AccountSettings.o Colleague.o Company.o Individual.o Mediator.o Notifier.o
	g++ -o main main.o AccountActivation.cpp AccountSettings.cpp Colleague.cpp Company.cpp Individual.cpp Mediator.cpp Notifier.cpp

main.o: main.cpp 
	g++ -c -g main.cpp

AccountActivation.o: AccountActivation.h AccountActivation.cpp
	g++ -c -g AccountActivation.cpp
	
AccountSettings.o: AccountSettings.h AccountSettings.cpp
	g++ -c -g AccountSettings.cpp
	
Colleague.o: Colleague.h Colleague.cpp
	g++ -c -g Colleague.cpp

Company.o: Company.h Company.cpp
	g++ -c -g Company.cpp
	
Individual.o: Individual.h Individual.cpp
	g++ -c -g Individual.cpp
	
Mediator.o: Mediator.h Mediator.cpp
	g++ -c -g Mediator.cpp
	
Notifier.o: Notifier.h Notifier.cpp
	g++ -c -g Notifier.cpp
	
run:
	./main

clean:
	rm *.o main