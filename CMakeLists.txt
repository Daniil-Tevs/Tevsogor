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
include_directories("data/skins/")
link_directories("ext/SFML/lib/")	

add_executable("${PROJECT_NAME}" main.cpp
		Person.h Person.cpp
		Arrows.h Arrow.cpp
		Enemy.h Enemy.cpp
		functions.h Constants.h
		Block.h
		"Pull of  enemies.cpp"
		"Pull of platforms.cpp"
		Pull_of_floor.cpp
		Pull_of_background.cpp Block.cpp)

target_link_libraries("${PROJECT_NAME}" sfml-graphics-s-d
						  sfml-window-s-d
						  sfml-system-s-d
						  opengl32
						  freetype
						  winmm
						  gdi32
						  sfml-audio-s-d
						  openal32
						  flac
						  vorbisenc
						  vorbisfile
						  vorbis
						  ogg)