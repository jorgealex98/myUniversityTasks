cmake_minimum_required(VERSION 3.27)
project(myUniversityTasks)

set(CMAKE_CXX_STANDARD 20)

# Agregar automáticamente todos los archivos .cpp dentro de las carpetas WeekX/
file(GLOB_RECURSE TASKS_SRC "Week*/**.cpp")

# Agregar todos los archivos .cpp al ejecutable

include(FetchContent)

FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt
        GIT_TAG 11.1.4

)
FetchContent_MakeAvailable(fmt)

#add_executable(myUniversityTasksv1 week1/main.cpp)
add_executable(myUniversityTasksv2 week2/main.cpp)




target_link_libraries(myUniversityTasksv2 fmt)