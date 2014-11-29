PROG = jsoncpp-test.exe

CPPS = $(shell ls src/*.cpp)
OBJS = $(subst .cpp,.o, $(subst src/,obj/, $(CPPS)))

CPPFLAGS = -Wall -std=c++11 -O2 -g -Iinclude
LIBS = -lstdc++ -Wl,-Bstatic -ljson_mingw_libmt -Llib
CPP = g++

.PHONY: all clean rebuild compile recompile

compile: $(OBJS)
	
recompile:
	$(MAKE) clean
	$(MAKE) compile

rebuild:
	$(MAKE) clean
	$(MAKE) $(PROG)
	
all: $(PROG)

$(PROG): $(OBJS)
	$(CPP) -o $@ $^ $(LIBS)

obj/%.o: src/%.cpp
	$(CPP) $(CPPFLAGS) -c $^ -o $@

clean:
	-rm $(PROG) obj/*.o

run: $(PROG)
	$(PROG)
	
info:
	$(CPP) --version