project(Challenge30)

set( CHALLENGE30_SOURCES
	src/main.cpp
	src/Person.h
	src/Student.h
	src/Professor.h
)

add_executable(${PROJECT_NAME} ${CHALLENGE30_SOURCES})