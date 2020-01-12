unset(source_files)
set(srcdirs
	./
	$ENV{HOME}/nut/include/
  )
  
set(CMAKE_INSTALL_PREFIX "$ENV{HOME}/nut")
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
ADD_DEFINITIONS(-DJSON_IS_AMALGAMATION)

foreach(srcdir ${srcdirs})
  include_directories(${srcdir})
  aux_source_directory(${srcdir} source_files)
endforeach()

ADD_EXECUTABLE(sig ${source_files})
TARGET_LINK_LIBRARIES(sig pthread)




