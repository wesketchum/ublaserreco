# for classes_def.xml!!
include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )
include_directories( $ENV{NUTOOLS_INC} )

art_make( BASENAME_ONLY
	  LIBRARY_NAME  LaserProducts
          LIB_LIBRARIES 
			${ROOT_BASIC_LIB_LIST}
                        ${ROOT_EG}
        )


install_headers()
install_fhicl()
install_source()
