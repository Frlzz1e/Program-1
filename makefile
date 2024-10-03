CXX = g++
override CXX_VERSION = -std=c++17
override CXX_FLAGS += -c
WARNINGS = -Wall -Wpedantic -Wextra
TESTFILE = TestCase.txt

Target = LabExec				#Does not work
TARGET_DEL = LabExec.exe


SRCS = LabPractice.cpp LabStorage.cpp LabPet.cpp LabDescription.cpp VetPetInfo.txt
OBJS = LabStorage.obj LabPet.obj LabDescription.obj 

all: $(TARGET) run


$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	$(TARGET)

clean:
	del $(TARGET_DEL) $(OBJS)
