project(Person C CXX)
add_library(Person STATIC
            person.c)
target_include_directories(Person PUBLIC include)
target_link_libraries(${PROJECT_NAME} PUBLIC
                        Object)
target_include_directories(${PROJECT_NAME} PUBLIC
                            ${PROJECT_SOURCE_DIR}
                            ${PROJECT_SOURCE_DIR}/components/Object)
