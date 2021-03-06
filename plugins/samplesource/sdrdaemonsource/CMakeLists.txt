project(sdrdaemonsource)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

if (HAS_SSSE3)
    message(STATUS "SDRdaemonSource: use SSSE3 SIMD" )
elseif (HAS_NEON)
    message(STATUS "SDRdaemonSource: use Neon SIMD" )
else()
    message(STATUS "SDRdaemonSource: Unsupported architecture")
    return()
endif()

set(sdrdaemonsource_SOURCES
    sdrdaemonsourcebuffer.cpp
    sdrdaemonsourcegui.cpp
    sdrdaemonsourceinput.cpp
    sdrdaemonsourcesettings.cpp
    sdrdaemonsourceplugin.cpp
    sdrdaemonsourceudphandler.cpp
)

set(sdrdaemonsource_HEADERS
    sdrdaemonsourcebuffer.h
    sdrdaemonsourcegui.h
    sdrdaemonsourceinput.h
    sdrdaemonsourcesettings.h
    sdrdaemonsourceplugin.h
    sdrdaemonsourceudphandler.h
)

set(sdrdaemonsource_FORMS
    sdrdaemonsourcegui.ui
)

#include(${QT_USE_FILE})
add_definitions(${QT_DEFINITIONS})
add_definitions(-DQT_PLUGIN)
add_definitions(-DQT_SHARED)

#qt4_wrap_cpp(sdrdaemonsource_HEADERS_MOC ${sdrdaemonsource_HEADERS})
qt5_wrap_ui(sdrdaemonsource_FORMS_HEADERS ${sdrdaemonsource_FORMS})

add_library(inputsdrdaemonsource SHARED
    ${sdrdaemonsource_SOURCES}
    ${sdrdaemonsource_HEADERS_MOC}
    ${sdrdaemonsource_FORMS_HEADERS}
)

if (BUILD_DEBIAN)
target_include_directories(inputsdrdaemonsource PUBLIC
    .
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_SOURCE_DIR}/swagger/sdrangel/code/qt5/client
    ${LIBCM256CCSRC}
)
else (BUILD_DEBIAN)
target_include_directories(inputsdrdaemonsource PUBLIC
    .
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_SOURCE_DIR}/swagger/sdrangel/code/qt5/client
    ${CM256CC_INCLUDE_DIR}
)
endif (BUILD_DEBIAN)

if (BUILD_DEBIAN)
target_link_libraries(inputsdrdaemonsource
    ${QT_LIBRARIES}
    cm256cc
    sdrbase
    sdrgui
    swagger
)
else (BUILD_DEBIAN)
target_link_libraries(inputsdrdaemonsource
    ${QT_LIBRARIES}
    ${CM256CC_LIBRARIES}
    sdrbase
    sdrgui
    swagger
)
endif (BUILD_DEBIAN)

target_link_libraries(inputsdrdaemonsource Qt5::Core Qt5::Widgets)

install(TARGETS inputsdrdaemonsource DESTINATION lib/plugins/samplesource)
