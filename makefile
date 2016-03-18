main: main.o obras.o literatura.o esculturas.o pintura.o disenos.o
	g++ main.o obras.o literatura.o esculturas.o pintura.o disenos.o  -o lab8
	
main.o:	main.cpp obras.h literatura.h esculturas.h pintura.h disenos.h
	g++ -c main.cpp 

obras.o:	obras.cpp obras.h
	g++ -c obras.cpp 

literatura.o:	literatura.cpp literatura.h obras.h
	g++ -c literatura.cpp

esculturas.o:	esculturas.cpp esculturas.h obras.h
	g++ -c esculturas.cpp

pintura.o:	pintura.cpp pintura.h obras.h
	g++ -c pintura.cpp

disenos.o:	disenos.cpp disenos.h obras.h
	g++ -c disenos.cpp

