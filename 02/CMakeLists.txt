# target_include_directories(foo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
 
file(GLOB 02_SRC
     "*.h"
     "*.cpp"
)

add_library(02 ${02_SRC})
