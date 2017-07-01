
output: weatherlog.o weatherdata.o linkedlist.o datalogger.o
	g++  weatherlog.o weatherdata.o linkedlist.o datalogger.o -o output

weatherlog.o: weatherlog.cpp
	g++ -c weatherlog.cpp

weatherdata.o: weatherdata.cpp weatherdata.h
	g++ -c weatherdata.cpp

linkedlist.o: linkedlist.cpp linkedlist.h
	g++ -c linkedlist.cpp

datalogger.o: datalogger.cpp datalogger.h
	g++ -c datalogger.cpp

clean:
	rm -f *.o

