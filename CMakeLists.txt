# CMakeList.txt: first C ++ project için CMake projesi, kaynağı ekleyin ve tanımlayın
# projeye özgü mantık burada bulunur.
#
cmake_minimum_required (VERSION 3.8)

project ("first C ++ project")

# Kaynağı bu projenin yürütülebilir dosyasına ekleyin.
add_executable (CMakeTarget "first C ++ project.cpp" "first C ++ project.h")

# TODO: Gerekirse testleri ve yükleme hedeflerini ekleyin.
