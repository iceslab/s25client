# Library containing old files that are still useful for tests
file(GLOB_RECURSE HEADERS src/*.h src/*.hpp)
add_library(legacyTestfiles STATIC src/legacy/TerrainData.cpp ${HEADERS})
target_include_directories(legacyTestfiles PUBLIC src)
target_link_libraries(legacyTestfiles PUBLIC s25Main)
