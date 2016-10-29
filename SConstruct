import os
units = ["testcases.cpp"]

for f in os.listdir("."):
    if f.endswith('.cpp') and f != "testcases.cpp":
        units.append(f)

print units
Program("testcases",  units, CXXFLAGS="-std=c++0x -g")
