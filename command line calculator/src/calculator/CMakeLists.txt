find_package(GTest REQUIRED)

add_library(calculator STATIC src/calculator.cc)
set_target_properties(calculator PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED YES CXX_EXTENSIONS NO)
target_include_directories(calculator PUBLIC include)

add_executable(runTestCalculator test/test_calculator.cc)
target_include_directories(runTestCalculator PRIVATE ${GTEST_INCLUDE_DIRS} include)
target_link_libraries(runTestCalculator ${GTEST_LIBRARIES} pthread calculator)

add_test(testCalculator runTestCalculator)

export(TARGETS calculator NAMESPACE ${PROJECT_NAME}:: FILE calculatorConfig.cmake)
export(PACKAGE calculator)

