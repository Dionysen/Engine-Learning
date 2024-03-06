target("imguizmo")
	set_kind("static")

	add_packages("glfw")
    includes("../imgui-docking/xmake.lua")
    add_deps("imgui-docking")

	add_includedirs(".", {public = true})
	add_files("./*.cpp")
