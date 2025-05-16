file(GLOB_RECURSE SRC_GPS ${CMAKE_SOURCE_DIR} "GPS/*.c")

idf_component_register(SRCS "main.c" "hardware.c" ${SRC_UI}
                    ${SRC_GPS}
                    "c_spi_slave.c" 
                    "signal_capture.c"
                    INCLUDE_DIRS "" "." "./GPS" "./GPS/RTK")


