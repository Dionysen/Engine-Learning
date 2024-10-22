target("imguizmo")
	set_kind("shared")
	add_packages("glfw", "imgui")

	add_includedirs(".", {public = true})
	add_files("./*.cpp")

	set_runtimes("MDd")
    add_cxflags("/utf-8", "/wd4828", "/wd4251", "/D_ITERATOR_DEBUG_LEVEL=2")