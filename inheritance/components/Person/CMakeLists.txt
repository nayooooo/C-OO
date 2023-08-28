project(person C CXX)
add_library(person STATIC
            person.c)
target_include_directories(person PUBLIC include)
target_link_libraries(${PROJECT_NAME} PUBLIC
                        object)
target_include_directories(${PROJECT_NAME} PUBLIC
                            ${PROJECT_SOURCE_DIR}
                            ${PROJECT_SOURCE_DIR}/components/object)
