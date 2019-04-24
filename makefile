
CXX=g++
CXXFLAGS = -I.
LIBS = -lm -lgtest -lpthread -lgtest_main

DEPS = romano.hpp

OBJ = romano.o main.o

%.o: %.c (DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

testa_romano: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f *.o *~ core *~ 
