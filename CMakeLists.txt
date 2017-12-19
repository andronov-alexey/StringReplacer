project(StringReplacer)
cmake_minimum_required(VERSION 3.6)

add_definitions(
	-DUNICODE
	-D_UNICODE
)

add_subdirectory(StringReplacer)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT StringReplacer)
