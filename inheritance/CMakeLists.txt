cmake_minimum_required(VERSION 3.2)

project(inheritance C CXX)
include_directories(include)
add_subdirectory(components)

set(SRC_LIST main.c)
add_executable(${PROJECT_NAME} ${SRC_LIST})

target_link_libraries(${PROJECT_NAME} PUBLIC
                        object
                        person)

target_include_directories(${PROJECT_NAME} PUBLIC
                            ${PROJECT_SOURCE_DIR}
                            ${PROJECT_SOURCE_DIR}/components/object
                            ${PROJECT_SOURCE_DIR}/components/person)
