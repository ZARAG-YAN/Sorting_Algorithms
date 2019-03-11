all:  bin/Selection_sort

SOURCES := $(wildcard src/*cpp)
OBJECTS := $(patsubst src/%.cpp, obj/%.o, $(SOURCES))

obj/%.o : src/%.cpp ./obj
	g++ -c $< -o $@
./obj: 
	mkdir -p obj

bin/Selection_sort : $(OBJECTS) ./bin
	g++ $(OBJECTS) -o $@

./bin:
	mkdir -p bin


.PHONY: clean

clean: 
	rm -rf ./obj ./bin

    



