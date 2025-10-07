# CMakeLists.txt
cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

include(GNUInstallDirs) # Use standard GNU installation directories


project("${PARAM_PROJECT_NAME}"
	VERSION "${${PROJECT_NAME}_VERSION}"
	DESCRIPTION "${${PROJECT_NAME}_SUMMARY}"
	HOMEPAGE_URL "${${PROJECT_NAME}_VENDOR_CONTACT}"
	LANGUAGES CXX)

find_package(spdlog REQUIRED)
find_package(OpenCV REQUIRED)

add_executable(sattu-app main.cpp)

target_link_libraries(sattu-app spdlog::spdlog ${OpenCV_LIBS})

# Install the executable to the standard binary directory
install(TARGETS my_executable DESTINATION ${CMAKE_INSTALL_BINDIR})


