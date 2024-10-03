CXX = g++
override CXX_VERSION = -std=c++17
override CXX_FLAGS += -c
WARNINGS = -Wall -Wpedantic -Wextra
TESTFILE = TestCase.txt

Target = main
TARGET_DEL = main.exe


SRCS = LabPractice.cpp LabStorage.cpp LabPet.cpp LabDescription.cpp 
OBJS = LabStorage.obj LabPet.obj LabDescription.obj VetPets.obj

all: $(TARGET) run

# Rule to link object files into the target executable
$(TARGET): $(OBJS)
    $(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile .cpp files into .o files
%.o: %.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to run the executable
run: $(TARGET)
    $(TARGET)

# Clean rule to remove generated files
clean:
    del $(TARGET_DEL) $(OBJS)
