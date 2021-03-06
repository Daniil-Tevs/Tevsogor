cmake_minimum_required(VERSION 3.15) # Проверка версии CMake.
									 # Если версия установленой программы
									 # старее указаной, произайдёт аварийный выход.

set(PROJECT_NAME Game)				 # имя проекта
project("${PROJECT_NAME}")


set(CMAKE_CXX_STANDARD 17)			 # устанавливаем 17 стандарт языка
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)


add_definitions(-DSFML_STATIC)		 # дефайны

include_directories("ext/SFML/include/")	# добавляем директории
include_directories("inc/")
include_directories("src/")
include_directories("skins/")
link_directories("ext/SFML/lib/")

add_executable("${PROJECT_NAME}" main.cpp
		inc/Person.h src/Person.cpp
		inc/Arrows.h src/Arrow.cpp
		inc/Enemy.h src/Enemy.cpp
		inc/functions.h inc/Constants.h
		inc/Block.h src/Block.cpp
		inc/Text.h
		src/Pull_of_enemies.cpp
		src/Pull_of_platforms.cpp
		src/Pull_of_floor.cpp
		src/Pull_of_background.cpp
		src/Person_dop_functions.cpp)

target_link_libraries("${PROJECT_NAME}"
		debug sfml-graphics-s-d
		debug sfml-window-s-d
		debug sfml-system-s-d
		debug sfml-audio-s-d)

target_link_libraries("${PROJECT_NAME}"
		optimized sfml-graphics-s
		optimized sfml-window-s
		optimized sfml-system-s
		optimized sfml-audio-s)

target_link_libraries("${PROJECT_NAME}" opengl32 freetype winmm gdi32 openal32 flac vorbisenc vorbisfile vorbis ogg)
