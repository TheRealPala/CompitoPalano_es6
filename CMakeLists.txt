cmake_minimum_required(VERSION 3.25)
project(CompitoPalano_es6)

set(CMAKE_CXX_STANDARD 17)

add_executable(CompitoPalano_es6 main.cpp Video.cpp Video.h Subject.cpp Subject.h Observer.cpp Observer.h VideoConverter.cpp VideoConverter.h ProgressObserver.cpp ProgressObserver.h CompletionObserver.cpp CompletionObserver.h)
