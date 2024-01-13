project(man C CXX)
add_library(man STATIC
            man.c)
target_include_directories(man PUBLIC include)
target_link_libraries(${PROJECT_NAME} PUBLIC
                        object person)
target_include_directories(${PROJECT_NAME} PUBLIC
                            ${PROJECT_SOURCE_DIR}
                            ${PROJECT_SOURCE_DIR}/components/object
                            ${PROJECT_SOURCE_DIR}/components/person)
