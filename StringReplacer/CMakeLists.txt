project(StringReplacer)
cmake_minimum_required(VERSION 3.6)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/StringReplacer/src)

set(FILE_SOURCES
	${SOURCE_DIR}/file/InputReader.h
	${SOURCE_DIR}/file/InputReader.cpp
)
source_group(file FILES ${FILE_SOURCES})

set(TOOLS_SOURCES
	${SOURCE_DIR}/tools/ReplaceHelper.h
	${SOURCE_DIR}/tools/ReplaceHelper.cpp
)
source_group(tools FILES ${TOOLS_SOURCES})

set(DOCS
	${CMAKE_CURRENT_SOURCE_DIR}/ReadMe.txt
)

set(SOURCES
	${SOURCE_DIR}/main.cpp
)

add_executable(${PROJECT_NAME}
	${SOURCES}
	${TOOLS_SOURCES}
	${FILE_SOURCES}
	${DOCS}
)
