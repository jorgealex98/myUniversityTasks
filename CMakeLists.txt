cmake_minimum_required(VERSION 3.27)
project(myUniversityTasks)

set(CMAKE_CXX_STANDARD 20)

# Agregar automáticamente todos los archivos .cpp dentro de las carpetas WeekX/
file(GLOB_RECURSE TASKS_SRC "Week*/**.cpp")

# Agregar todos los archivos .cpp al ejecutable
add_executable(myUniversityTasks main.cpp ${TASKS_SRC}
        week1/Comparing.cpp)