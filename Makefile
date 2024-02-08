CC = g++
APP = 3D-hiearchy
SRC_DIR = src/

src_files := $(wildcard $(SRC_DIR)*)
obj_files := $(addsuffix .o, $(basename $(notdir $(src_files))))

all:	$(obj_files)
	$(CC) -fopenmp -o $(APP) $^

define build-obj
	$(CC) -Iinc -O0 -g3 -Wall -c $<
	$(CC) -Iinc -masm=intel -g3 -Wall -c $< -S
endef

main.o: src/main.cpp
	$(CC) -fopenmp -Iinc -O0 -g3 -Wall -c src/main.cpp
	$(CC) -fopenmp -Iinc -masm=intel -g3 -Wall -c src/main.cpp -S

%.o:	src/%.cpp inc/%.h
	$(call build-obj)
 
clean:
	rm *.s *.o 3D-hiearchy
