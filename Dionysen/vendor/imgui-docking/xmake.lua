target("imgui-docking")
	set_kind("shared")

	add_packages("glfw")

	add_includedirs(".", "./impl_glfw", "./impl_win32",{public = true})
	add_files("./*.cpp", "./impl_glfw/*.cpp", "./impl_win32/*.cpp")

	add_defines("IMGUI_IMPL_OPENGL_LOADER_GLEW")

	set_runtimes("MDd")
    add_cxflags("/utf-8", "/wd4828", "/wd4251", "/D_ITERATOR_DEBUG_LEVEL=2")