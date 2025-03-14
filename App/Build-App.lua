project "App"
   kind "ConsoleApp"
   language "C++"
   cppdialect "C++20"
   targetdir "Binaries/%{cfg.buildcfg}"
   staticruntime "off"

   files { "Source/**.h", 
   "Source/**.cpp", 
   "Students/**.h", 
   "Students/**.cpp" , 
   "Professor/**.h", 
   "Professor/**.cpp",
   "Unic/**.h", 
   "Unic/**.cpp",
   "Staff/**.h", 
   "Staff/**.cpp",
   "Labs/**.cpp",
   "Labs/**.h"
    }

   includedirs
   {
      "Students",
      "Professor",
      "Unic",
      "Staff",
      "Labs",
	  "../Core/Source"
   }

   links
   {
      "Core"
   }

   targetdir ("../Binaries/" .. OutputDir .. "/%{prj.name}")
   objdir ("../Binaries/Intermediates/" .. OutputDir .. "/%{prj.name}")

   filter "system:windows"
       systemversion "latest"
       defines { "WINDOWS" }

   filter "configurations:Debug"
       defines { "DEBUG" }
       runtime "Debug"
       symbols "On"

   filter "configurations:Release"
       defines { "RELEASE" }
       runtime "Release"
       optimize "On"
       symbols "On"

   filter "configurations:Dist"
       defines { "DIST" }
       runtime "Release"
       optimize "On"
       symbols "Off"