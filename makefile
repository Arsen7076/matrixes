export EXECUTABLE := out
#default: $(EXECUTABLE)
export SHELL := /bin/bash
export DEBUG_FLAGS ?= -O3
export SOURCE_FILES := $(wildcard *.cpp)
export OBJ_FILES := $(patsubst %.cpp, %.o, $(SOURCE_FILES))
export DEP_FILES := $(patsubst %.cpp, %.dep, $(SOURCE_FILES))
export Temp :=$(DEP_FILES) $(OBJ_FILES) $(EXECUTABLE)

$(EXECUTABLE) : $(OBJ_FILES)
	@g++ $^ -o $@

%.o :
	@g++ -c $< -o $@

%.dep : %.cpp
	@g++ -MM $< -o $@


.PHONY: clean
clean:
	@echo "bolory jnjvac e"
	@rm -r $(Temp) > /dev/null 2> /dev/null

.PHONY: test
test:
	@./$(EXECUTABLE)

.PHONY: debug
debug:
	@$(MAKE) DEBUG_FLAGS="-g"
	@gdb ./$(EXECUTABLE)

.PHONY: release
release:
	@$(MAKE) DEBUG_FLAGS="-O3"
.PHONY: profile
profile: 
	@echo "profile proces"
	@$(MAKE) DEBUG_FLAGS="-pg"
	@./$(EXECUTABLE)
	@gprof ./$(EXECUTABLE)
	

-include $(DEP_FILES)
